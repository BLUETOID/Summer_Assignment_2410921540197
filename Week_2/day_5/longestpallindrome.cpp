#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
        int n = s.length();
        int maxLength = 0 ;
        int start = 0;

        auto expand = [&](int l,int r){
            while(l>=0 && r < n && s[l]==s[r]){
                if(r-l+1 > maxLength){
                    maxLength = r-l+1;
                    start = l;
                }
                l--;
                r++;
            }
        };

        for(int i=0;i<n;i++){
            expand(i,i);
            expand(i,i+1);
        }

        return s.substr(start,maxLength);
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    string result = longestPalindrome(s);
    cout<<result<<endl;

    return 0;
}