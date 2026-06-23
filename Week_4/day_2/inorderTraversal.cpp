#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>result;
        inorder(root,result);
        return result;
    }

    void inorder(TreeNode *root,vector<int>&result){
        if(root==nullptr)return;
        inorder(root->left,result);
        result.push_back(root->val);
        inorder(root->right,result);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    vector<int> result = sol.inorderTraversal(root);
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
