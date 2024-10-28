from django.db import models
from brands.models import Brand
from django.contrib.auth.models import User

class Car(models.Model):
    car_name = models.CharField(max_length=100)
    content = models.TextField()
    car_price = models.IntegerField()
    brand = models.ForeignKey(Brand, on_delete=models.CASCADE, related_name='cars')
    quantity = models.IntegerField()
    image = models.ImageField(upload_to='uploads/', blank=True, null=True)
    buyer = models.ForeignKey(User, on_delete=models.CASCADE, null=True, blank=True)

    def __str__(self):
        return self.car_name

class Order(models.Model):
    car = models.ForeignKey(Car, on_delete=models.CASCADE)
    buyer = models.ForeignKey(User, on_delete=models.CASCADE)
    created_at = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return f'Order {self.id} by {self.buyer}'
    
class Comment(models.Model):
    car = models.ForeignKey(Car, on_delete=models.CASCADE, related_name='comments')
    name = models.CharField(max_length=30)
    email = models.EmailField()
    body = models.TextField()
    created_on = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return f"Comments by {self.name}"