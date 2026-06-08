#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char, int> freq1;
        for (auto x : magazine) {
            freq1[x]++;
        }

        for (auto x : ransomNote) {
            freq1[x]--;
            if (freq1[x] < 0)
                return false;
        }

        return true;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string ransomNote, magazine;
    cin >> ransomNote >> magazine;
    if (canConstruct(ransomNote, magazine))
        cout << "Yes\n";
    else
        cout << "No\n";


    return 0;
}