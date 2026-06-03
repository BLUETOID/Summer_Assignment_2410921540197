#include <bits/stdc++.h>
using namespace std;

 vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        vector<int>ans(n);
        int right = n-1;
        int current = n-1;
        while(left<=right){
            int left_part = nums[left]*nums[left];
            int right_part= nums[right]*nums[right];

            if(left_part > right_part){
                ans[current--]=left_part;
                left++;
            }
            else{
                ans[current--]=right_part;
                right--;
            }
        }

        return ans;
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
    vector<int> result = sortedSquares(nums);
    cout << "Sorted squares of the array: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}