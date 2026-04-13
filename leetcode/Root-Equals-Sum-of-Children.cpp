1class Solution {
2public:
3    bool checkTree(TreeNode* root) {
4        if (root == nullptr) return false;
5
6        if (root->left == nullptr || root->right == nullptr)
7            return false;
8
9        return root->val == root->left->val + root->right->val;
10    }
11};