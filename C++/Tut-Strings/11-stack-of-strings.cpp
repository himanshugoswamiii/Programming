#include <iostream>
#include <stack>
#include <string>
using std::cout;
using std::cin;
using std::endl;

int main ()
{
    std::stack<std::string> st;
    st.push("1st");
    st.push("2nd");
    st.push("3rd");

    int size = st.size();

    cout << st.size() << endl;
    
    for (int i = 0; i < size; i++) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
