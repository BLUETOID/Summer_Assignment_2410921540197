#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int left=0;
        int top =0;
        int right = m-1;
        int bottom = n-1;
        vector<int> result;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                result.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                result.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            if(left<=right){
            for(int i =bottom;i>=top;i--){
                result.push_back(matrix[i][left]);
            }
            left++;
            }
        }
        return result;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    vector<int> result = spiralOrder(matrix);
    cout << "Spiral order:\n";
    for (const auto& val : result) {
        cout << val << " ";
    }
    cout << "\n";

    return 0;
}