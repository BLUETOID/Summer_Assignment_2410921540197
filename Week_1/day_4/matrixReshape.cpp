#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int>matrixValue;
        int n = mat.size();
        int m = mat[0].size();
        if (n * m != r * c) return mat;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matrixValue.push_back(mat[i][j]);
            }
        }
        int k=0;
        vector<vector<int>> result;
        for(int i=0;i<r;i++){
            vector<int>current;
            for(int j=0;j<c;j++){
                current.push_back(matrixValue[k++]);
            }
            result.push_back(current);
        }

        return result;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r, c;
    cin >> n >> r >> c;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    vector<vector<int>> result = matrixReshape(mat, r, c);
    cout << "Reshaped matrix:\n";
    for (const auto& row : result) {
        for (const auto& val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
    

    return 0;
}