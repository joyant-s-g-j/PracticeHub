from django import forms
from . models import Car, Comment

class CarForm(forms.ModelForm):
    class Meta:
        model = Car
        fields = ['car_name', 'content', 'car_price', 'brand', 'quantity', 'image']

class CommentForm(forms.ModelForm):
    class Meta:
        model = Comment
        fields = ['name', 'email', 'body']