from django import forms
from django.forms.widgets import NumberInput
# from django.core import validators

class DummyForm(forms.Form):
    BIRTH_YEAR_CHOICES = ['2004', '2005', '2008']
    FAVORITE_COLORS_CHOICES = [
    ('blue', 'Blue'),
    ('green', 'Green'),
    ('black', 'Black'),
    ]
    name = forms.CharField(max_length=40)
    email = forms.EmailField(required=False)
    birth_date = forms.DateField(widget=NumberInput(attrs={'type': 'date'}))
    birth_year = forms.DateField(widget=forms.SelectDateWidget(years=BIRTH_YEAR_CHOICES))
    value = forms.DecimalField(label="Amount", widget=forms.NumberInput(attrs={'placeholder':'Enter amount'}))
    favorite_color = forms.MultipleChoiceField(widget=forms.RadioSelect, choices=FAVORITE_COLORS_CHOICES)
    comment = forms.CharField(widget=forms.Textarea(attrs={'rows':2}))
    agree = forms.BooleanField()