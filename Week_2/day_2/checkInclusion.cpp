#include <bits/stdc++.h>
using namespace std;

 bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;

        vector<char>f1(s1.begin(),s1.end());
        sort(f1.begin(),f1.end());

        for(int i=0;i<=s2.size()-s1.size();i++){
            vector<char>f2;
            for(int j=i;j<i+s1.size();j++){
                f2.push_back(s2[j]);
            }
            sort(f2.begin(),f2.end());
            if(f1==f2) return true;
        }

        return false;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;
    if (checkInclusion(s1, s2))
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}