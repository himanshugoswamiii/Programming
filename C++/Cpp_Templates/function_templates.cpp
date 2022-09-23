#include<iostream>
using namespace std;

template <typename swap>
//Syntax: template <typename T>

void swapp(swap &i, swap &j)
{
    swap t;
    t=i;
    i=j;
    j=t;
}
 
int main() {
    int e,f;
    char g,r;
    float x,y;

    cout<<"\nPlease insert 2 Integer Values: "; 
    cin>>e>>f;
    swapp(e,f);
    cout<<"\nInteger values after Swapping: ";
    cout<<e<<"\t"<<f<<"\n\n";
    
    cout<<"\nPlease insert 2 Character Values: "; 
    cin>>g>>r;
    swapp(g,r);
    cout<<"\n Character Values after Swapping: ";
    
    cout<<g<<"\t"<<r<<"\n\n";
    cout<<"\n please insert 2 Float Values: "; 
    cin>>x>>y;
    swapp(x,y);
    cout<<"\nThe resultant float values after swapping: ";
    cout<<x<<"\t"<<y<<"\n\n";
}
