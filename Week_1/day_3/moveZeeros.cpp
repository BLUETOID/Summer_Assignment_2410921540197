#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
            
        }
            while(j<nums.size()){
                nums[j]=0;
                j++;
            }
    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    moveZeroes(nums);
    cout << "Array after moving zeroes: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    

    return 0;
}