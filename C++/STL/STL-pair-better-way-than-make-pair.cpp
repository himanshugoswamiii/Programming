#include <iostream>
#include <vector>
#include <utility>

using std::vector;
using std::cout;
using std::endl;

int main ()
{
    vector<std::pair<int, float>> student;

    int flag = 1;
    int roll;
    float pcent;
    student.push_back({22, 56.29});
    student.push_back({2, 86.19});
    student.push_back({9, 56.19});
    student.push_back({19, 76.19});

    // printing the vector
    for (int i = 0; i < student.size(); i++) {
        cout << student[i].first << " : " << student[i].second << endl;
    }


    return 0;
}

