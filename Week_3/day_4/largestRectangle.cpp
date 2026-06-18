#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int area = 0;
        heights.push_back(0);
        for (int i = 0; i < heights.size(); i++) {
            while (!st.empty() && heights[i] < heights[st.top()]) {
                int height = heights[st.top()];
                st.pop();
                int w = st.empty() ? i : (i - st.top() - 1);
                area = max(area, height * w);
            }

            st.push(i);
        }

        return area;
    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout << largestRectangleArea(heights) << endl;

    return 0;
}
