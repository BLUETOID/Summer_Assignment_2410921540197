 #include <bits/stdc++.h>
 using namespace std;

 struct TreeNode {
     int val;
     TreeNode* left;
     TreeNode* right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

 class Solution {
 public:
     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     vector<vector<int>> result;
     if (root == nullptr) return result;

     queue<TreeNode*> q;
     q.push(root);
     bool leftToRight = true;

     while (!q.empty()) {
         int size = q.size();
         vector<int> level;

         for (int i = 0; i < size; i++) {
             TreeNode* node = q.front();
             q.pop();

             level.push_back(node->val);

             if (node->left) q.push(node->left);
             if (node->right) q.push(node->right);
         }

         if (!leftToRight) reverse(level.begin(), level.end());

         result.push_back(level);
         leftToRight = !leftToRight;
     }

     return result;
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
     vector<vector<int>> result = sol.zigzagLevelOrder(root);
     for (auto level : result) {
         for (auto val : level) {
             cout << val << " ";
         }
         cout << endl;
     }

     return 0;
 }
