#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]){
                i++;
            }j++;
        }
        return i==s.length();
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    if (isSubsequence(s, t))
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}