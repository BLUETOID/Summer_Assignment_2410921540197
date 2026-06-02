#include <bits/stdc++.h>
using namespace std;


bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for(int i = 0; i < nums.size(); i++){
            if(seen.count(nums[i]))
                return true;

            seen.insert(nums[i]);
        }
        return false;
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
    bool result = containsDuplicate(nums);
    if (result) {
        cout << "Contains duplicate elements.\n";
    } else {
        cout << "No duplicate elements found.\n";
    }

    return 0;
}