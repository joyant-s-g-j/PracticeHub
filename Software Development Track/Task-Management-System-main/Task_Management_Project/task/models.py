from django.db import models
from category.models import Category
# Create your models here.
class Task(models.Model):
    taskTitle = models.CharField(max_length=100, verbose_name='Task Title')
    taskDescription = models.TextField(verbose_name='Task Description')
    category = models.ManyToManyField(Category)
    iscompleted = models.BooleanField(default=False, verbose_name='Is Completed?')
    taskAssignDate = models.DateField(auto_now_add=True, verbose_name='Task Date')

    def __str__(self):
        return self.taskTitle
    