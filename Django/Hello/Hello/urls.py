"""Hello URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/4.1/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""
from django.contrib import admin
from django.urls import path,include

# added for file handling
from django.conf import settings
from django.conf.urls.static import static

admin.site.site_header = "Harry Ice Cream admin"
admin.site.site_title = "Harry Ice Cream Portal"
admin.site.index_title = "Welcome to Harry Ice Creams"

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', include('home.urls'))
]

## added for file handling
urlpatterns += static(settings.STATIC_URL, document_root = settings.STATIC_ROOT)

urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)


