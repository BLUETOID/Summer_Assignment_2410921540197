#include <bits/stdc++.h>
using namespace std;


string helper(string &s,int &i){
    string result = "";
    int num = 0;
    while(i<s.length()){
        if(isdigit(s[i])){
            num = num*10 + (s[i]-'0');
            i++;
        }
        else if(s[i]=='['){
            i++;
            string inner = helper(s,i);
            for(int j=0;j<num;j++){
                result+=inner;
            }
            num =0;
        }
        else if(s[i]==']'){
            i++;
            return result;
        }
        else{
            result+=s[i];
            i++;
        }
    }
    return result;
}

string decodeString(string s){
    int i = 0;
    return helper(s,i);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    cout<<decodeString(s)<<endl;
    return 0;
}