from django.shortcuts import render
from musician import models

def base(request):
    data = models.Musician.objects.all().prefetch_related('albums')
    return render(request, 'base.html', {'data': data})