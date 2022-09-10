#include "iostream"
using namespace std;
void printArr(int Arr[],int length){
    for (int i = 0; i < length; i++) {
        cout << Arr[i] << " ";
    }
    cout<<endl;
}

void insertionSort(int Arr[],int len){
    int temp;
    for (int i = 1; i < len; i++) {
        int j=i; // we've to put ith element in right pos
        int key=Arr[j];
        while (j>0)
        {
                if (key<Arr[j-1])
                {
                    Arr[j]=Arr[j-1];
                    j--;
                }
                else
                {
                    break;
                }
        }
        Arr[j]=key;
    }
}

int main ()
{

    int myArr[]={12,3,1,4,5,19,-11,20};
    int len=sizeof(myArr)/sizeof(int);

    printArr(myArr,len);

    insertionSort(myArr,len);

    printArr(myArr,len);

    
    return 0;
}
