from django.db import models
from django.contrib.auth.models import User
# Create your models here.
class Musician(models.Model):
    auto_field = models.AutoField(primary_key=True)
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    first_name = models.CharField(max_length=50)
    last_name = models.CharField(max_length=50)
    email = models.EmailField()
    phone_number = models.IntegerField(max_length=12)
    instrument = models.CharField(max_length=50)

    def __str__(self):
        return self.first_name
    
