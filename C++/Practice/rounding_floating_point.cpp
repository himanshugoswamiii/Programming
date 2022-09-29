#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    float f1;
    double d1;

    cin>>f1;
    cin>>d1;

    printf("%.3f\n",f1);
    cout << setprecision(3) <<f1 << endl;
    cout << fixed <<setprecision(9) <<d1 << endl;
    
    return 0;
}
