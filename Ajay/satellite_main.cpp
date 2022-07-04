#include<bits/stdc++.h>
#include<string>
#include "satellite_data1.cpp"
using namespace std;
void insertion_sort(int a[][2])
{
    cout<<"Average Screen without sorting:"<<endl;
   for(int i=0;i<42;i++)
   {
    cout<<a[i][0]<<" "<<a[i][1]<<endl;
   }
   for(int i=0;i<42;i++)
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
   for(int i=0;i<42;i++)
   {
    cout<<a[i][0]<<" "<<a[i][1]<<endl;
   }
}
int main()
{
    Record r[42];
    hashmap hash;
    int i=0;
    ifstream ip("Average screen time Survey. (Responses)1.csv");
    string k,n,ag,sc,in,wh,sl,s,ex;
    while (ip.peek()!=EOF && i<42)
    {
        getline(ip,k,',');
        getline(ip,n,',');
        getline(ip,ag,',');
        getline(ip,sc,',');
        getline(ip,in,',');
        getline(ip,wh,',');
        getline(ip,ex,',');
        getline(ip,sl,'\n');

        s=string_cutter(k);
        r[i].get_values(s,n,ag,sc,in,wh,ex,sl);
        i++;
    }
    for(int i=0;i<42;i++)
    {
        hash.insert(r[i].key,i);
    }
    int choice;
    while(1)
    {
        cout<<endl<<"*****Driver Code****"<<endl;
        cout<<"1).Search Using Key\n2).Sort Data\n3).Display all records\n4).Display Hahsmap\n5).Exit\nEnter your choice:";
        cin>>choice;
        if(choice==1)
        {
            int user_key,ind;
            cout<<"Enter Key to fetch details:";
            cin>>user_key;
            ind=hash.search(user_key);
            r[ind].getinfo();
            cout<<endl;
        }
        else if(choice==2)
        {
           int a[42][2];
           for(int i=0;i<42;i++)
           {
            a[i][0]=r[i].av_sc;
            a[i][1]=i;
           }
           insertion_sort(a);
        }
        else if(choice==3)
        {
           for(int i=0;i<42;i++)
           {
              r[i].getinfo();
              cout<<endl;
           }  
           cout<<endl;
        }
        else if(choice==4)
        {
            hash.display();
        }
        else
        {
            ip.close();
            exit(1);
        }
    }
    return 0;
}
