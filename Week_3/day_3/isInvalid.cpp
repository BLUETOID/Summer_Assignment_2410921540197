#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
        int n = s.length();
        stack<char>st;
        for(auto ch:s){
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty()) return false;

                char top = st.top();
                if(ch==')' && top !='(' ||
                ch==']' && top != '[' ||
                ch=='}' && top != '{'){
                return false;
                }

                st.pop();
            }
        }
        return st.empty();
    }

int main() {
    string s;
    cin >> s;
    cout << (isValid(s) ? "Valid" : "Invalid") << endl;
    return 0;
}
