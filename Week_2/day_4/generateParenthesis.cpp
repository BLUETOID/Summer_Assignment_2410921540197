#include <bits/stdc++.h>
using namespace std;


void helper(int n,string current,int open,int close,vector<string> &result){
    if(open==n && close==n){
        result.push_back(current);
        return;
    }
    if(open < n){
        helper(n,current+"(",open+1,close,result);
    }
    if(close < open){
        helper(n,current+")",open,close+1,result);
    }
}

vector<string> generateParenthesis(int n) {
        int open,close;
        vector<string>result;
        string current="";

        helper(n,current,0,0,result);

        return result;
    }

    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<string> result = generateParenthesis(n);
    for(auto &s:result){
        cout<<s<<endl;
    }


    return 0;
}