1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13    void check(TreeNode* root, vector<int>&ans){
14        if(root==nullptr) return;
15        check(root->left,ans);
16        ans.push_back(root->val);
17        check(root->right,ans);
18    }
19public:
20    int countNodes(TreeNode* root) {
21        if(root==nullptr) return 0;
22        vector<int>ans;
23        check(root,ans);
24        return ans.size();
25    }
26};