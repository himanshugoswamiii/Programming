#include <iostream>
#include <map>
#include <string>
using namespace std;

void printMap(map<int, string> mp){
    for (auto i: mp) {
        cout << i.first << " "<< i.second <<endl;

    }
    cout <<  endl;
}
int main ()
{
    map<int, string> m;
    // Insertion in Map
    m[1]="Abhishek";
    m[11]="Dev";
    m[22]="Himanshu"; 
    m.insert({5,"Bheem"}); // Other way
    // m.at(22)="Himanshu"; // RUNTIME ERROR : Can't be used for insertion

    printMap(m);

    // finding an element
    cout << "Find if key: 13 is present : "<<m.count(13) << endl;
    cout << "Find if key: 22 is present : "<<m.count(22) << endl;

    // Erasing an element
    m.erase(22);
    cout << "\nAfter erasing 22 :" << endl;
    printMap(m);

    // Iterators
    auto it= m.find(5); // returns the iterator for key 5
    for(auto i=it;i!=m.end();i++){ // Print all elements after key 5
        cout<<i->first<<" "<<i->second<<endl;
    }


    return 0;
}
