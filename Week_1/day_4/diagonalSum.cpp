#include <bits/stdc++.h>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int matrixSum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j)
                    matrixSum += mat[i][j];
                else if (i + j == n - 1)
                    matrixSum += mat[i][j];
            }
        }

        return matrixSum;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    int result = diagonalSum(mat);
    cout << "Sum of the matrix diagonals: " << result << "\n";

    return 0;
}