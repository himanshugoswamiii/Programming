#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int strangeScoring( int N, vector<int> A){
    vector<int> New;
    int final_val = 0;
    int sum;

    for (int i = 0; i < N; i=i+2) {
        sum = int(A[i]|A[i+1]) - int(A[i]&A[i+1]);
        New.push_back(sum);
    }

    if (N/2==1)
    {
        final_val = New[0];
    }
    else
    {
        final_val+=strangeScoring(N/2, New);
    }


    return final_val;


}
int main ()
{
    int N;
    cin>>N;
    vector<int> A(N);
    for (int i_A = 0; i_A < N; i_A++){
        cin >> A[i_A];
    }

    int out_;
    out_ = strangeScoring(N, A);

    cout << out_ << endl;
    
    return 0;
}
