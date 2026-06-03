#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
        int n = height.size();
        int maxArea = 0;
        int left=0;
        int right = n -1;
        while(left<right){
            int hight = min(height[left],height[right]);
            int width = right - left;
            int area = hight * width;
            maxArea = max(maxArea,area);

            if(height[left]<height[right]) left++;
            else{
                right--;
            }
        }

        return maxArea;
    }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }
    int result = maxArea(height);
    cout << "Maximum area of water that can be contained: " << result << "\n";

    return 0;
}