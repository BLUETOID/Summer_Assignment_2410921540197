#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
        string lowercase="";
        string reversed ="";
        for(char c:s){
            if(isalnum(c)) lowercase += tolower(c);
        }
        int n = lowercase.length();
        for(int i=n-1;i>=0;i--){
            reversed+=lowercase[i];
        }
        return lowercase==reversed;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    string s;
    getline(cin, s);
    if (isPalindrome(s)) {
        cout << "The string is a palindrome.\n";
    } else {
        cout << "The string is not a palindrome.\n";
    }
    return 0;
}