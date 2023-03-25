#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector<int> vec;
    vec.push_back(10); // index : 0
    vec.push_back(20);

    cout << "Capacity of vector : "<< vec.capacity() << endl;

    // Accessing an element which is non-existing
    try
    {
        cout << vec.at(4);
        
    }
    catch (exception& exc)
    {
        cout << "exception occured" << endl;
    }

    return 0;
}
