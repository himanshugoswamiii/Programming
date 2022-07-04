#include <iostream>
using namespace std;
int main(){
    int size,i;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    int queue[size];
    cout<<"Enter the elements in the array"<<endl;
    for(i=0;i<size;i++){
        cin>>queue[i];
    }
    //cout<<queue<<endl; // This will print the address instead of the queue

    // Output of the array
    cout<<"\nArray is: "<<endl;
    for(i=0;i<size;i++){
        cout<<queue[i]<<endl;
    }
}