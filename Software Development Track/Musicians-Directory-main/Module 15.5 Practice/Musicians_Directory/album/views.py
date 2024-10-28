from django.shortcuts import render, redirect
from . import forms
# Create your views here.
def add_album(request):
    if request.method == 'POST':
        album_form = forms.AlbumForm(request.POST)
        if album_form.is_valid():
            album_form.save()
            return redirect('add_album')
        
    else:
        album_form = forms.AlbumForm()
    return render(request, 'add_album.html', {'form': album_form})

