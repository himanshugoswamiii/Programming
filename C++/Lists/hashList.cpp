#include <iostream>
#include <list>
using namespace std;
int main (int argc, char *argv[])
{
    int size=5;
    list <int> *mylist; // Declaring the list
    mylist = new list <int> [size]; // Dynamic memory allocation
    mylist[0].push_back(20);
    mylist[0].push_back(30);
    for (int i = 0; i < size; i++){
        cout << i;
        for (auto x:mylist[i]){
            cout << " --> " << x;
        }
        cout << endl;
    }
    return 0;
}
