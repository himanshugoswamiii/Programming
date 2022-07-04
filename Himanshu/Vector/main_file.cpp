#include<iostream>
#include <vector>
#include "fstream"
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
    Record(string time,string Na,string a,string p1,string p2,string vty,string pet,string ai){
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

// To create the key from the time stamp
string string_cutter(string s)
{
    s.erase(0,10); // Delete the date
    s.erase(s.begin()+2);
    return s;
}

// Function for Insertion Sort
void insertion_sort(int a[][2],int size)
{
    cout<<"Average Screen without sorting:"<<endl;
   for(int i=0;i<size;i++)
   {
    cout<<a[i][0]<<" "<<a[i][1]<<endl;
   }
   for(int i=0;i<size;i++)
   {
    int hole=i;
    int current=a[i+1][0];
    int curr_index=a[i+1][1];
    while(current<a[hole][0] && hole>=0)
    {
        a[hole+1][0]=a[hole][0];
        a[hole+1][1]=a[hole][1];
        hole--;
    }
    a[hole+1][0]=current;
    a[hole+1][1]=curr_index;
   }
    cout<<endl<<"Average Screen after sorting:"<<endl;
   for(int i=0;i<size;i++)
   {
    cout<<a[i][0]<<" "<<a[i][1]<<endl;
   }
}
int main()
{
    int i=0;
    // Creating a vector for dynamic Array of Object
    vector <Record> array;

    // We're not making link list here, because we want fast retrieval of data using :
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
        array.push_back(Record(s,a2,a3,a4,a5,a6,a7,a8));
        i++; // Next time the value will go into next objects
    }
    for(int i=0;i<array.size();i++)
    {
        hash.insert(array[i].key,i);
    }
    int choice;
    while(1)
    {
        cout<<endl<<"***** PETROL PUMP ****"<<endl;
        cout<<"1).Search Using Key\n2).Sort Data\n3).Display all records\n4).Display Hahsmap\n5).Exit\nEnter your choice:";
        cin>>choice;
        switch (choice) {
            case 1:{
            int user_key,ind;
            cout<<"Enter Key to fetch details:";
            cin>>user_key;
            ind=hash.search(user_key);
            array[ind].getinfo();
            cout<<endl;

                   }
            case 2:{
                   int a[array.size()][2];
                   for(int i=0;i<array.size();i++)
                   {
                    a[i][0]=array[i].petrol;
                    a[i][1]=i;
                   }
                   insertion_sort(a,array.size());
                   break;

                   }
            case 3:{
                   for(int i=0;i<array.size();i++)
                   {
                      array[i].getinfo();
                      cout<<"\n\n";
                   }  
                   cout<<"\n \n";
                   break;

                   }
            case 4:
                cout<<endl;
                hash.display();
                break;
            default:
                ip.close();
                exit(1);
        }
    }
    return 0;
}
