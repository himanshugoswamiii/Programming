#include<bits/stdc++.h>
#include<string>
#include "satellite_hashmap.cpp"
using namespace std;
//Record class :-contains satellite data collected on Average Screen Time.
class Record{
    public:
    int key;
    string name;
    int age;
    int av_sc;
    int av_in;
    int av_wh;
    string exercise;
    int sleep;
    
    void get_values(string k,string n,string ag,string sc,string in,string wh,string ex,string sl)
    {
        key=stoi(k);
        name=n;
        age=stoi(ag);
        av_sc=stoi(sc);
        av_in=stoi(in);
        av_wh=stoi(wh);
        sleep=stoi(sl);
        exercise=ex;
    }
    void getinfo()
    {
        cout<<"Record details:"<<endl;
        cout<<"Key:"<<key<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Average Screen Time:"<<av_sc<<endl;
        cout<<"Average Instagram Time:"<<av_in<<endl;
        cout<<"Average Whatsapp Time:"<<av_wh<<endl;
        cout<<"Do You Exercise:"<<exercise<<endl;
        cout<<"Total Sleep:"<<sleep<<endl;
    }
};
string string_cutter(string s)
{
    s.erase(0,11);
    s.erase(s.begin()+2);
    return s;
}
