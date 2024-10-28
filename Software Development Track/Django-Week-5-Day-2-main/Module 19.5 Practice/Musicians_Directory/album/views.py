from django.shortcuts import render
from django.views.generic import CreateView
from . import models
from . import forms
from django.urls import reverse_lazy
# Create your views here.
class AddAlbumCreateView(CreateView):
    model = models.Album
    form_class = forms.AlbumForm
    template_name = 'add_album.html'
    success_url = reverse_lazy('add_album')
    def form_valid(self, form):
        form.instance.user = self.request.user
        return super().form_valid(form)
    