1class Solution {
2public:
3    int findBottomLeftValue(TreeNode* root) {
4        queue<TreeNode*> qt;
5        qt.push(root);
6
7        vector<vector<int>> ans;
8
9        while(!qt.empty()) {
10            int size = qt.size();
11            vector<int> level;
12
13            for(int i = 0; i < size; i++) {
14                TreeNode* node = qt.front();
15                qt.pop();
16
17                level.push_back(node->val);
18
19                if(node->left) qt.push(node->left);
20                if(node->right) qt.push(node->right);
21            }
22
23            ans.push_back(level);
24        }
25
26        int last = ans.size() - 1;
27        return ans[last][0];
28    }
29};