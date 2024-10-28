from django.shortcuts import render, redirect
from django.contrib import messages
from django.contrib.auth.mixins import UserPassesTestMixin
from django.utils.decorators import method_decorator
from django.contrib.auth.decorators import login_required
from django.views.generic import CreateView, UpdateView, DeleteView, DetailView
from django.urls import reverse_lazy
from . import forms
from . import models
from .models import Car
from .models import Order
# Create your views here.
@method_decorator(login_required, name='dispatch')
class AddCarCreateView(UserPassesTestMixin,CreateView):
    model = Car
    form_class = forms.CarForm
    template_name = 'add_car.html'
    success_url = reverse_lazy('add_car')

    def test_func(self):
        return self.request.user.is_superuser
    
    def handle_no_permission(self):
        return redirect('basepage')
    
@method_decorator(login_required, name='dispatch')
class EditCarView(UserPassesTestMixin, UpdateView):
    model = models.Car
    form_class = forms.CarForm
    template_name = 'add_car.html'
    pk_url_kwarg = 'id'
    success_url = reverse_lazy('basepage')

    def test_func(self):
        return self.request.user.is_superuser
    
    def handle_no_permission(self):
        return redirect('basepage')
    
@method_decorator(login_required, name='dispatch')
class DeleteCarView(UserPassesTestMixin, DeleteView):
    model = models.Car
    template_name = 'delete.html'
    success_url = reverse_lazy('basepage')
    pk_url_kwarg = 'id'

    def test_func(self):
        return self.request.user.is_superuser
    
    def handle_no_permission(self):
        return redirect('basepage')

@login_required
def car_buy(request, car_id):
    try:
        car = Car.objects.get(id=car_id)
        if request.method == 'POST':
            if car.quantity > 0:
                car.buyer = request.user
                car.quantity -= 1
                car.save()
                Order.objects.create(buyer=request.user, car=car)
                messages.success(request, f'You have successfully purchased {car.car_name}!')
                return redirect('profile')
            else:
                messages.error(request, 'Sorry, this car is out of stock.')
                return redirect('profile')
    except Car.DoesNotExist:
        messages.error(request, 'The car you are trying to purchase does not exist.')
        return redirect('profile')
    return render(request, 'car_buy.html', {'car': car})

@login_required
def order(request):
    order = Order.objects.filter(buyer = request.user)
    return render(request, 'profile.html', {'orders' : order})
    
class DetailCarView(DetailView):
    model = Car
    template_name = 'car_details.html'

    def post(self, request, *args, **kwargs):
        self.object = self.get_object()  
        comment_form = forms.CommentForm(data=request.POST)

        if comment_form.is_valid():
            new_comment = comment_form.save(commit=False)
            new_comment.car = self.object
            new_comment.user = request.user
            new_comment.save()
        return redirect('detail_car', pk=self.object.pk)

    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        car = self.object
        comments = car.comments.all()
        comment_form = forms.CommentForm()

        context['comments'] = comments
        context['comment_form'] = comment_form
        return context