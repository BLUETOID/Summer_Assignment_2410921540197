#include <bits/stdc++.h>
using namespace std;

bool repeatedSubstringPattern(string s) {
        string doubled = s+s;
        string mid = doubled.substr(1,doubled.size()-2);
        return mid.find(s)!=string::npos;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    if (repeatedSubstringPattern(s))
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}