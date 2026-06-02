#include <bits/stdc++.h>
using namespace std;

 double findMaxAverage(vector<int>& nums, int k) {
    int n = nums.size();
    int sum = 0;
    for(int i=0;i<k;i++){
        sum+=nums[i];
    }
    int maxSum = sum;
    for(int i=k;i<n;i++){
        sum+=nums[i];
        sum-=nums[i-k];
        maxSum=max(sum,maxSum);
    }

    return (double)maxSum /k;
 }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    double result = findMaxAverage(nums, k);
    cout << "Maximum average of subarray of length " << k << ": " << result << "\n";
    

    return 0;
}