from django.contrib import admin
from django.urls import path
from home import views #Added by me

urlpatterns = [
        path("",views.index,name='home'),
        path("about",views.about,name='about page'),
        path("contact",views.contact,name='My contact information'),
        path("services",views.services,name='My services'),
        path("code",views.code,name='My code window'),
        path("sum_page",views.sum_page,name="Sum page"),
        path("add",views.add,name="add"),

        # Added for files handling
        path("file_handling",views.upload,name="upload"), # File Handling page
        path("upload_file",views.upload,name="upload"),
]
