1class Solution {
2public:
3    int ans = INT_MIN;
4
5    int solve(TreeNode* root) {
6        if (root == nullptr)
7            return 0;
8
9        int left = max(0, solve(root->left));
10        int right = max(0, solve(root->right));
11
12        // Maximum path passing through current node
13        ans = max(ans, left + right + root->val);
14
15        // Return maximum contribution to parent
16        return root->val + max(left, right);
17    }
18
19    int maxPathSum(TreeNode* root) {
20        solve(root);
21        return ans;
22    }
23};