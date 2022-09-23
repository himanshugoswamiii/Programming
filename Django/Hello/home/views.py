from django.shortcuts import render
from django.http import HttpResponse




# Create your views here.
def index(request):
    context = {
        'name': "Hello this is Himanshu",
        'course': "I'm currently doing MCA"

    }
    return render(request, 'index.html',context)

def about(request):
    return HttpResponse("this is about page")

def contact(request):
    return render(request, 'contact.html')
    # return HttpResponse("this is Contact page")

def services(request):
    return render(request, 'services.html')

def code(request):
    return render(request, 'code.html')

def add(request):
    val1= int(request.GET['num1'])
    val2= int(request.GET['num2'])
    res=val1+val2
    return render(request, 'sum.html',{"result":res})
    # Passing the result values as dictionary

def sum_page(request):
    return render(request, 'sum.html')

# -----   FILE HANDLING ----
# Function for File Upload
from home.forms import MyfileUploadForm
from .models import file_upload

def upload(request):
    if request.method == 'POST':
        form = MyfileUploadForm(request.POST, request.FILES)


        print(form.as_p)
        
        if form.is_valid():
            name = form.cleaned_data['file_name']
            the_files = form.cleaned_data['files_data']

            file_upload(file_name=name, my_file=the_files).save()
            
            return HttpResponse("file upload")
        else:
            return HttpResponse('error')

    else:
        
        context = {
            'form':MyfileUploadForm()
        }      
        
        return render(request, 'fileHandling.html', context)
        



def show_file(request):
    # this for testing 
    all_data = file_upload.objects.all()

    context = {
        'data':all_data 
        }

    return render(request, 'view.html', context)
    