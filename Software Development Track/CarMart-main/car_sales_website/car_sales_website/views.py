from django.shortcuts import render, get_object_or_404
from cars.models import Car
from brands.models import Brand
def home(request, brand_slug = None):
    data = Car.objects.all()
    if brand_slug is not None:
        brand = get_object_or_404(Brand, slug = brand_slug)
        data = Car.objects.filter(brand = brand)
    brands = Brand.objects.all()
    return render(request, 'home.html', {'data' : data, 'brands' : brands})