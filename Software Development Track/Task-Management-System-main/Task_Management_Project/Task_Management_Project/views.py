from django.shortcuts import render
from task.models import Task
def base(request):
    tasks = Task.objects.all()
    return render(request, 'base.html', {'data': tasks})