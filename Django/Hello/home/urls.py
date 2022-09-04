from django.contrib import admin
from django.urls import path
from home import views #Added by me

urlpatterns = [
        path("",views.index,name='home'),
        path("about",views.about,name='about page'),
        path("contact",views.contact,name='My contact information')
]
