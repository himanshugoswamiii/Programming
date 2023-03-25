#include <iostream>
using namespace std;

class Node{
    public:
    char ch;
    int count;
    Node(){
        ch = '0';
        count = 0;
    }
};
// Array of nodes
Node arr[26];

void printCount(Node *ptr, int index){
    // Prints the counts
    if (index > 25)
    {
        return;
    }
    if (ptr->count!=0)
    {
        cout << ptr->ch <<" : " << ptr->count << endl;
    }
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
            arr[0].ch='a';
            arr[0].count+=1;
            break;

        case 'b':
        case 'B':
            arr[1].ch='b';
            arr[1].count+=1;
            break;

        case 'c':
        case 'C':
            arr[2].ch='c';
            arr[2].count+=1;
            break;

        case 'd':
        case 'D':
            arr[3].ch='d';
            arr[3].count+=1;
            break;

        case 'e':
        case 'E':
            arr[4].ch='e';
            arr[4].count+=1;
            break;

        case 'f':
        case 'F':
            arr[5].ch='f';
            arr[5].count+=1;
            break;

        case 'g':
        case 'G':
            arr[6].ch='g';
            arr[6].count+=1;
            break;

        case 'h':
        case 'H':
            arr[7].ch='h';
            arr[7].count+=1;
            break;

        case 'i':
        case 'I':
            arr[8].ch='i';
            arr[8].count+=1;
            break;
            
        case 'k':
        case 'K':
            arr[9].ch='k';
            arr[9].count+=1;
            break;

        case 'l':
        case 'L':
            arr[10].ch='l';
            arr[10].count+=1;
            break;

        default:
            break;
    }

    countChar(ptr+1);

}


int main ()
{
    char str[] = "Liliab";
    countChar(str);

    int index=0;
    printCount(arr,index);
    return 0;
}
