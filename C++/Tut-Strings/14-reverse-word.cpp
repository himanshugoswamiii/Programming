#include <iostream>

using std::cout;
using std::cin;
using std::string;

void rev(string &S){
    int i = 0;
    int j = S.length() - 1;
    char t;
    while (i < j){
        t = S[i];
        S[i] = S[j];
        S[j] = t;
        i++;
        j--;
    }
}


int main(){
    string word;
    cout << "Enter your word : ";
    cin >> word ;

    rev(word);

    cout << "Reversed Word : " << word;



   return 0;
}
