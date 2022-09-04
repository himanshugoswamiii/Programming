#include "iostream"
using namespace std;
int main ()
{
    bool x=1;
    std::byte y=(byte)x; // Explicit type conversion
    cout << x ;
    return 0;
}
