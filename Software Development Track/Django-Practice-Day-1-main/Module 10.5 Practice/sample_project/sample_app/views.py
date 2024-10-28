from django.shortcuts import render
import random
import datetime
# Create your views here.
def home(request):
    post_time_str = '2024-09-14T10:30:00'
    post_time = datetime.datetime.fromisoformat(post_time_str)
    num = random.randint(1, 100)
    f = {'name' : ['Joyant', 'Sheikhar', 'Gupta', 'Joy'], 
         'date' : datetime.datetime.now(),
         'val' : '', 
         'valu' : '20',
         'nm' : 'joyant',
         'string' : 'Python Is Fun',
         'details' : [
            {'name': 'Josh', 'age': 19},
            {'name': 'Dave', 'age': 22},
            {'name': 'Joe', 'age': 31},
         ],
         'es' : '<p>You are <em>pretty</em> smart!</p>',
         'fruit' : ['Apple', 'Mango', 'Orange'],
         'ani' : """cat\ndog\nhorse""",
         'ttl' : 'It is a title',
         'postTime' : post_time,
         'line' : '<b>I</b> <button>love</button> <span>dogs</span>',
         'msg' : num
         }
    return render(request, 'home.html', f)