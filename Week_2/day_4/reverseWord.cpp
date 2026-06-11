#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
        int left = 0;
        int right = 0;
        while(right<s.length()){
            if(s[right] == ' '){
                reverse(s.begin()+left , s.begin()+right);
                left = right+1;
            }
            right++;
        }
        reverse(s.begin()+left,s.begin()+right);

        return s;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin,s);
    cout << reverseWords(s) << "\n";
    

    return 0;
}