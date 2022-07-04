#include <iostream>
#include <string>
using namespace std;
struct Student{
    string fname;
    string lname;
    int Rollno;
};

int main(){
    //What should be type of the pointer ?
    Student* ptr;// Type of pointers is type of variable it's pointing to
    Student S;
    ptr=&S;
    cout<<"Enter the first name : ";
    //cin.get(ptr->fname,30);
    getline(cin,(*ptr).fname);
    //cin.get(S.fname,30);
    cout<<"Enter the last name: ";
    //cin.get(ptr->lname,30);
    getline(cin,(*ptr).lname);
    cout<<endl;
    cout<<"Enter the Rollno: ";
    cin>>(*ptr).Rollno;
    cout<<"\n -- Details of the student are: \n";
    cout<<"Name: "<<S.fname<<" "<<S.lname<<endl;
    cout<<"Roll No: "<<S.Rollno;
    return 0;
}