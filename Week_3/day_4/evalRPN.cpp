#include <bits/stdc++.h>
using namespace std;

int evalRPN(vector<string>& tokens) {
        int ans = 0;
        stack<int> st;
        for (int i = 0; i < tokens.size(); i++) {
            string t = tokens[i];
            if (t == "*" || t == "+" || t == "-" || t == "/"){
                int x = st.top(); st.pop();
                int y = st.top();st.pop();

                if (t == "+") st.push(y + x);
                else if (t == "-") st.push(y - x);
                else if (t == "*") st.push(y * x);
                else if (t == "/") st.push(y / x);
            }
            else{
                st.push(stoi(t));
            }
        }

        return st.top();
    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> tokens = {"2", "1", "+", "3", "*"};
    cout << evalRPN(tokens) << endl;

    return 0;
}
