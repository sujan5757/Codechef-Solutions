#include <iostream>
#include <stack>
#include <string>
using namespace std;

int min_string_length(string s) {
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    }
    return st.size();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << min_string_length(s) << endl;
    }
    return 0;
}
