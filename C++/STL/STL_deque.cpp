// Double Ended queue : Insertion and Deletion at the beginning and end
// - Dynamic , Random Access 
#include <iostream>
#include "deque"
using namespace std;
void printDeque(deque<int> deq){
    cout << "Deque is : ";
    for (int y : deq) {
        cout << y <<" ";
    }
    cout << endl;
}

int main ()
{
    deque<int> d={10,20,30};
    d.push_back(2);
    d.push_front(1);
    d.push_front(3);
    d.push_back(4);
    printDeque(d);

    // Deleting the elements
    d.pop_back();
    d.pop_front();
    printDeque(d);

    // Access the elements
    cout << "d(1): "<<d.at(1) << endl;
    cout << "Front is : "<<d.front() << endl;
    cout << "Back is : "<<d.back() << endl;

    // Check if deque is empty
    cout << "d.empty() : "<<d.empty() << endl; // 0 : not empty

    // Size and max_size : No function for capacity
    cout << "d.size(): "<<d.size() << endl;
    cout << "d.max_size(): "<<d.max_size() << endl;

    // --- ERASE FUNCTION
    // d.erase(1,4); // ERROR : Need iterators as arguments
    d.erase(d.begin()); // Delete first element
    printDeque(d);
    cout << "d.size(): "<<d.size() << endl;

    d.erase(d.begin()+1,d.begin()+3); // Delete elements form index 1 to 3(not included)
    printDeque(d);
    cout << "d.size(): "<<d.size() << endl;

    return 0;
}
