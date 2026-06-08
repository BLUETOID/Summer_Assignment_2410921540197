#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        if (s.length()!=t.length())
        return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s,t;
    cin>>s>>t;
    if(isAnagram(s,t))
        cout<<"Anagram\n";
    else
        cout<<"Not Anagram\n";
    return 0;
}