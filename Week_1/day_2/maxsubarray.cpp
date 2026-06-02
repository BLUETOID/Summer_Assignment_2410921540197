#include <bits/stdc++.h>
using namespace std;

 int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum1 = nums[0];
        int sum2 = nums[0];

        for (int i = 1; i < n; i++) {
            sum1 = max(nums[i], sum1 + nums[i]);
            sum2 = max(sum1, sum2);
        }

        return sum2;
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
    int result = maxSubArray(nums);
    cout << "Maximum subarray sum: " << result << "\n";

    return 0;
}