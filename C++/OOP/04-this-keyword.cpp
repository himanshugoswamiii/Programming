#include <iostream>
using namespace std;
class Player{
    string name;
    int age;
    public:
        Player(string name, int age){
            this->name = name;
            this->age = age;
        }

        void print(){
            cout << "Name is " << name << endl;
            cout << "Age is " << age << endl;
        }
};

int main ()
{

    Player obj("Himanshu", 20);
    obj.print();
    
    return 0;
}
