from django.shortcuts import render, redirect
from . import forms
from . models import Musician
# Create your views here.
def add_musician(request):
    if request.method == 'POST':
        musician_form = forms.MusicianForm(request.POST)
        if musician_form.is_valid():
            musician_form.save()
            return redirect('add_musician')
        
    else:
        musician_form = forms.MusicianForm()
    return render(request, 'add_musician.html', {'form': musician_form})

def edit_musician(request, id):
    mus = Musician.objects.get(pk=id)
    mus_form = forms.MusicianForm(instance=mus)
    if request.method == 'POST':
        mus_form = forms.MusicianForm(request.POST, instance=mus)
        if mus_form.is_valid():
            mus_form.save()
            return redirect('basepage')
        
    return render(request, 'add_musician.html', {'form': mus_form})

def delete_musician(request, id):
    mus = Musician.objects.get(pk=id)
    mus.delete()
    return redirect('basepage')
        