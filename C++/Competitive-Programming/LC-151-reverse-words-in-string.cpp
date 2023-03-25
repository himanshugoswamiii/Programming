#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void reverse(string &str, int i, int j){
    /* Reverse string between index i and j */
    char temp;
    while(i<j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

string reverseWord(string s){

    int i = 0;
    int j = i;
    int len = s.length();
	int wordcount = 0;
	bool flag = true;


    // Remove all the extra spaces
    while(flag == true){
        if(i == len){
			flag = false;
        }

        while(i<len && s[i]==' '){
            // Skip spaces
            i++;
        }

		if (wordcount != 0){
			j++;
		}

        while(i<len && s[i]!=' '){
			s[j] = s[i];
            i++;
			j++;
        }

		wordcount++;
	}

    s.resize(j);
	len = s.length();
	j = 0;
	i = 0;
	int lb;

	while(true){

		if (j == len){
			break;
		}

		if ( s[j] == ' ') j++; // Skip the space
		lb = j;

		while(j<len && s[j] != ' ') j++;
		reverse(s, lb, j-1);
	}

	reverse(s, 0, j);
		
	return s;
}
        

int main ()
{

    string s = "What is your name";

    string str = "What";
    //reverse(str, 0 , 3);
    //cout << str;

	cout << reverseWord(s);


    
    return 0;
}
