from django.db import models

# Create your models here.
class DummyModel(models.Model):
    auto_field = models.AutoField(primary_key=True)    
    name = models.CharField(max_length=30)
    father_name = models.CharField(max_length=30)
    address = models.TextField()

    def __str__(self):
        return self.name
    