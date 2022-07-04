#include "iostream"
using namespace std;

// Array using dynamic memory allocation
void myArr(int** x,int size,int i_size){
    for(int i = 0; i < size; i++){
        x[i] = new int[i_size];
        std::cout << "Enter elements in the "<<i<<" th array" << std::endl;
        for(int j = 0; j < i_size; j++){
            cin >> x[i][j];
        }
    }
}

void printArr(int** x,int size,int i_size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < i_size; j++){
            cout << x[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main (int argc, char *argv[])
{
    int size,i_size;
    std::cout << "Enter size of Outer Array" << std::endl;
    std::cin >> size;
    std::cout << "Enter size of Inner Array" << std::endl;
    std::cin >> i_size;

    int** Arr=new int*[size];
    myArr(Arr,size,i_size);
    printArr(Arr,size,i_size);
    
    return 0;
}
