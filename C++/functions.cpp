#include <iostream>
using namespace std;

// Sum of 3 nos
int sum(int x,int y,int z=10){
    // Here z=10 is the default argument
    return x+y+z;
}

// Main function
int main(){
    cout<<sum(2,5)<<endl;
    cout<<sum(2,5,100); // Here i'm passing z
    return 0;

}