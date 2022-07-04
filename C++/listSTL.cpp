#include <iostream>
#include <list>
int main (int argc, char *argv[])
{
    std::list <int> mylist={1,2,3,4}; // We're using std because i've not used using namespace std
    for (int x:mylist){
        std::cout<<x<<std::endl;
    }
    return 0;
}
