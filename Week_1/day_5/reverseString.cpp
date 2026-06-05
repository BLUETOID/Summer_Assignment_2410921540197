#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    getline(cin, input);
    vector<char> s(input.begin(), input.end());
    reverseString(s);
    cout << "Reversed string: ";
    for (char c : s) {
        cout << c;
    }

    return 0;
}