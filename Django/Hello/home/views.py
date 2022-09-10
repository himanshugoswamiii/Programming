from django.shortcuts import render, HttpResponse

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

    
