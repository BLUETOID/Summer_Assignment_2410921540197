#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int j=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
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
    int newLength = removeDuplicates(nums);
    cout << "New length after removing duplicates: " << newLength << "\n";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";
    

    return 0;
}