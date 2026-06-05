#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string common_prefix=strs[0];

        for(int i=1;i<strs.size();i++){
            int j=0;
            while(j<min(common_prefix.length(),strs[i].length())){
                if(common_prefix[j] != strs[i][j]) break;
                j++;
            }
            common_prefix=common_prefix.substr(0,j);
        }

        return common_prefix;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();
    vector<string> strs(n);
    for (int i = 0; i < n; i++) {
        getline(cin, strs[i]);
    }
    string result = longestCommonPrefix(strs);
    cout << "Longest common prefix: " << result << "\n";

    return 0;
}