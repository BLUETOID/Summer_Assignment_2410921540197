#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
        if(haystack.length() < needle.length())  return -1;

        vector<char>needed(needle.begin(),needle.end());

        for(int i=0;i<=haystack.size()-needle.size();i++){
            vector<char>test;
            for(int j=i;j<i+needle.length();j++){
                test.push_back(haystack[j]);
            }

            if(needed == test) return i;
        }

        return -1;
    }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string haystack, needle;
    cin >> haystack >> needle;
    int index = strStr(haystack, needle);
    if (index != -1)
        cout << "Needle found at index: " << index << "\n";
    else
        cout << "Needle not found in haystack.\n";

    return 0;
}