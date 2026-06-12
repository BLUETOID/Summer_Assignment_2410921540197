#include <bits/stdc++.h>
using namespace std;

 vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>mp;
        for(auto x : strs){
            string key = x;
            sort(key.begin(),key.end());
            mp[key].push_back(x);
        }

        vector<vector<string>>result;
        for(auto &[keys,value]:mp){
            result.push_back(value);
        }

        return result;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<string>strs(n);
    for(int i=0; i<n; i++){
        cin>>strs[i];
    }

    vector<vector<string>>result = groupAnagrams(strs);
    for(const auto &group : result){
        for(const auto &str : group){
            cout<<str<<" ";
        }
        cout<<endl;
    }

    return 0;
}