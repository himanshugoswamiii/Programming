#include <iostream>
#include <string>
using namespace std;
struct Student{
    int Rollno;
    string name;
    //char name[50]; -- same behaviour as above
    char gender;
    int cls; // default values is 0
};
void displayS(Student S){
    cout<<"Student Roll no is: "<<S.Rollno<<endl;
    cout<<"Student Name is: "<<S.name<<endl;
    cout<<"Student gender is : "<<S.gender<<endl;
    cout<<"Student class is : "<<S.cls<<endl;
}

void insertS(Student &S){
    cin>>S.Rollno;
    cout<<endl;
    cout<<"Hello World";
    getline(cin,S.name);
    cin>>S.gender;
    cin>>S.cls;
}

int main(){
    Student S1;
    cout<<"Enter Roll No, Name, Gender(M/F), Class"<<endl;
    insertS(S1);
    displayS(S1);
    return 0;
}