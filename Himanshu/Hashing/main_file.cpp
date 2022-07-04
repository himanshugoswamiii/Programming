#include<iostream>
#include "fstream"
#include <iterator>
#include<string>

#include "hashmap.cpp"

using namespace std;

// Data of the Petrol Pump
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

    void petrol_req(){
        cout<<name<<" : "<<petrol;
        cout<<endl;
    }
};

// To create the key from the time stamp
string string_cutter(string s)
{
    s.erase(0,10); // Delete the date
    s.erase(s.begin()+2);
    return s;
}

// Structure for help in Insertion_Sort and Display
struct dataa
{
    int val;
    string name;
};

// Function for Insertion Sort
void insertionSortAsc(dataa Arr[],int l){
    // Insertion Sort Ascending order
    dataa key;
    int j;
    for(int i=1; i<=l-1; i++){
        key.val=Arr[i].val;
        key.name=Arr[i].name;
        j=i-1;
        while (j>=0 && Arr[j].val>key.val) {
            Arr[j+1].val=Arr[j].val;
            Arr[j+1].name=Arr[j].name;
            j--;

        }
        Arr[j+1].val=key.val;
        Arr[j+1].name=key.name;
    }

    // Printing the Sorted DATA
    for (int i = 0; i < l ; i++) {
        cout<<Arr[i].name<<" : "<<Arr[i].val;
        cout<<endl;
        
    }

}


// Main Function
int main()
{
    int size,i=0;
    cout<<"Enter the no of records you have in your .csv file: ";
    cin>>size;
    Record r[size]; // Making Objects of Record
    // We're not making link list here, because we want fast retrieval of data using
    // HASH - MAP

    hashmap hash;

    ifstream ip("Satellite_data.csv");
    string s; // For creation of the Key
    string a1,a2,a3,a4,a5,a6,a7,a8;
    while (ip.peek()!=EOF)
    {
        getline(ip,a1,',');
        getline(ip,a2,',');
        getline(ip,a3,',');
        getline(ip,a4,',');
        getline(ip,a5,',');
        getline(ip,a6,',');
        getline(ip,a7,',');
        getline(ip,a8,'\n');

        s=string_cutter(a1);
        r[i].insert(s,a2,a3,a4,a5,a6,a7,a8);
        i++; // Next time the value will go into next objects
    }
    for(int i=0;i<size;i++)
    {
        hash.insert(r[i].key,i);
    }
    int choice;
    while(1)
    {
        cout<<endl<<"***** PETROL PUMP ****"<<endl;
        cout<<"1). Display the current queue \n2). Sort Data according to petrol amount\n3). Display all records\n4). Display Hahsmap\n5). Display each person with individual Petrol requirements \n6). Exit\nEnter your choice:";
        cin>>choice;
        switch (choice) {
            case 1:{
                   for(int i=0;i<size;i++)
                   {
                      cout<<r[i].name;
                      cout<<" <-- ";
                   }  
                   cout<<endl;
                   }
                   break;
            case 2:{
                    dataa d1[size];
                   for(int i=0;i<size;i++)
                   {
                    d1[i].val=r[i].petrol;
                    d1[i].name=r[i].name;
                   }
                   insertionSortAsc(d1,size);
                   break;

                   }
            case 3:{
                   for(int i=0;i<size;i++)
                   {
                      r[i].getinfo();
                      cout<<"\n\n";
                   }  
                   cout<<"\n \n";
                   break;

                   }
            case 4:
                cout<<endl;
                hash.display();
                break;
            case 5:
                {
                    for (int i = 0; i < size; i++) {
                        r[i].petrol_req();
                    }
                    break;
                }
            default:
                ip.close();
                exit(1);
        }
    }
    return 0;
}
