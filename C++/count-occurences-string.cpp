#include <iostream>

using namespace std;

int arr[26]={};


void printCount(int *ptr, int index){
    // Prints the counts
    if (index > 25)
    {
        return;
    }
    cout << index <<" : " << *ptr << endl;
    // Index 0 represents a
    printCount(ptr+1, index+1);
}

void countChar(char *ptr){
    // Using Recursion as loop
    if (*ptr == '\0'){
        return;
    }

    switch (*ptr) {
        case 'a':
        case 'A':
            arr[0]+=1;
            break;

        case 'b':
        case 'B':
            arr[1]+=1;
            break;

        case 'c':
        case 'C':
            arr[2]+=1;
            break;

        case 'd':
        case 'D':
            arr[3]+=1;
            break;

        case 'e':
        case 'E':
            arr[4]+=1;
            break;

        case 'f':
        case 'F':
            arr[5]+=1;
            break;

        default:
            break;
    }

    cout << *ptr << endl;
    countChar(ptr+1);

}


int main ()
{
    char str[] = "DaFFabBc";
    countChar((str));

    int index=0;
    printCount(arr,index);
    return 0;
}
