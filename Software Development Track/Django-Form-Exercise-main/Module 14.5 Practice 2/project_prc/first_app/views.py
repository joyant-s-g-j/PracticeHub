from django.shortcuts import render
from . import models
# Create your views here.
def home(request):
    dummy = models.DummyModel.objects.all()
    # print(dummy)
    return render(request, 'home.html', {'data': dummy})