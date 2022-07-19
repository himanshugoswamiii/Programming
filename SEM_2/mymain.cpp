#include "linkedListADT.cpp"
#include "iostream"
using namespace std;

int main ()
{

    LinkedList ll;

    ll.insertAtHead(20);
    ll.insertAtHead(40);
    ll.insertAtHead(60);
    ll.insertAtTail(100);
    ll.insertAtIndex(500,2);
    ll.display();


    
    return 0;
}
