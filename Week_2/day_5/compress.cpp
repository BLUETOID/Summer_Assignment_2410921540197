#include <bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
        int i =0;
        int index=0;
        int n = chars.size();
        while(i<n){
            char current = chars[i];
            int count = 0;
            while(i<n && chars[i]==current){
                i++;
                count++;
            }

            chars[index++] = current;

            if(count > 1){
                string cnt = to_string(count);
                for(char c: cnt){
                    chars[index++] = c;
                }
            }
        }
    return index;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<char>chars(n);
    for(int i=0; i<n; i++){
        cin>>chars[i];
    }
    int newLength = compress(chars);
    for(int i=0; i<newLength; i++){
        cout<<chars[i]<<" ";
    }
    cout<<endl;

    return 0;
}