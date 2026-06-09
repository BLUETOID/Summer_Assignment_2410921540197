#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p) {
        
        if(s.size() < p.size()) return {};

        vector<int> freq1(26,0);
        vector<int>freq2(26,0);
        vector<int>result;

        int pLength = p.size();
        int sLength = s.size();

        for(int i=0;i<pLength;i++){
            freq1[s[i]-'a']++;
            freq2[p[i]-'a']++;

        }

        if(freq1 == freq2) result.push_back(0);

        for(int i=pLength;i<sLength;i++){
            freq1[s[i]-'a']++;
            freq1[s[i-pLength] -'a']--;

            if(freq1==freq2) result.push_back(i-pLength+1);
        }

        return result;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, p;
    cin >> s >> p;
    vector<int> result = findAnagrams(s, p);
    for (int index : result) {
        cout << index << " ";
    }
    cout << "\n";
    

    return 0;
}