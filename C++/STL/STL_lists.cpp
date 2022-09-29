#include "iostream"
#include "list"
#include <list>
using namespace std;
void printList(list<int> l){
    for (int x: l) {
        cout << x << " ";
    }
    cout<<endl;
}
int main ()
{
    list<int> l1(5,10); // 10 : 5 times in the list
    printList(l1);
    // Insertion in the list
    l1.push_back(20); // O(1)
    l1.push_front(99); // O(1)
    printList(l1);

    // Accessing list Elements
    // l1[2]; //ERROR
    // Access 3rd element
    for (int i = 0; i < ; i++) {
        
    }

    return 0;
}
