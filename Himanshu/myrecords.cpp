#include <iostream>
#include "string"
using namespace std;
//Record class :-contains satellite data collected on Average Screen Time.
class Record{
public:
    int key;
    string name;
    int age;
    string pref1;
    string pref2;
    string vtype;
    int petrol;
    string air;

    // Constructor
    void insert(string time,string Na,string a,string p1,string p2,string vty,string pet,string ai){
        // Conversion from sTring to integer : stoi
        key=stoi(time);
        name=Na;
        age=stoi(a);
        pref1=p1;
        pref2=p2;
        vtype=vty;
        petrol=stoi(pet);
        air=ai;
    }
    void getinfo()
    {
        cout<<"Record details:"<<endl;
        cout<<"Key:"<<key<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Petrol Pump Preference 1:"<<pref1<<endl;
        cout<<"Petrol Pump Preference 2:"<<pref2<<endl;
        cout<<"Vehicle Type:"<<vtype;
        cout<<"\nAmount of Petrol:"<<petrol;
        cout<<"\nFill-up for Petrol"<<air;
    }
};
