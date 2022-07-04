#include <iostream>
using namespace std;

void callbyval(int x, int y){
    x++;
    y++;
    cout<<"x is : "<<x<<endl<<"y is : "<<y<<endl;
    //return;
}

void callbyref(int &x, int &y){
    x++;
    y++;
    cout<<"x is : "<<x<<endl<<"y is : "<<y<<endl;
}

int main(){
    int x=10;
    int y=20;
    callbyval(x, y);
    cout<<"Original x and y: "<<x<<" "<<y<<endl;
    callbyref(x, y);
    cout<<"Original x and y: "<<x<<" "<<y<<endl;

    return 0;
}