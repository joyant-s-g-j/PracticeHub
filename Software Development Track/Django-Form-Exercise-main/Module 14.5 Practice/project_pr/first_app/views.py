from django.shortcuts import render
from . forms import DummyForm
# Create your views here.
def home(request):
    if request.method == 'POST':
        form = DummyForm(request.POST)
        if form.is_valid():
            form.save(commit=True)
            print(form.cleaned_data)
    
    else:
        form = DummyForm()
    return render(request, 'home.html', {'form':form})