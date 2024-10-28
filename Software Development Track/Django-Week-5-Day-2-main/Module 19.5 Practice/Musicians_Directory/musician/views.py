from django.contrib.auth.mixins import LoginRequiredMixin
from django.views.generic import CreateView, UpdateView, DeleteView
from .models import Musician
from .forms import MusicianForm
from django.urls import reverse_lazy
# Create your views here.
class AddMusicianCreateView(LoginRequiredMixin, CreateView):
    model = Musician
    form_class = MusicianForm
    template_name = 'add_musician.html'
    success_url = reverse_lazy('add_musician')
    def form_valid(self, form):
        form.instance.user = self.request.user
        return super().form_valid(form)
    
class EditMusicianView(UpdateView):
    model = Musician
    form_class = MusicianForm
    template_name = 'add_musician.html'
    pk_url_kwarg = 'id'
    success_url = reverse_lazy('basepage')

class DeleteMusicianView(DeleteView):
    model = Musician
    template_name = 'del_musician.html'
    success_url = reverse_lazy('basepage')
    pk_url_kwarg = 'id'