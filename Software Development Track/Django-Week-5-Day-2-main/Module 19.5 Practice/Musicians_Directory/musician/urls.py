from django.urls import path
from . import views
urlpatterns = [
    path('add/', views.AddMusicianCreateView.as_view(), name="add_musician"),
    path('edit/<int:id>', views.EditMusicianView.as_view(), name='edit_mus'),
    path('delete/<int:id>', views.DeleteMusicianView.as_view(), name="delete_mus")
]
