1class Solution {
2public:
3    vector<int> inorderTraversal(TreeNode* root) {
4        vector<int> ans;
5        stack<TreeNode*> st;
6        TreeNode* curr = root;
7
8        while (curr != nullptr || !st.empty()) {
9
10            // go to the leftmost node
11            while (curr != nullptr) {
12                st.push(curr);
13                curr = curr->left;
14            }
15
16            // process current node
17            curr = st.top();
18            st.pop();
19
20            ans.push_back(curr->val);
21
22            // move to right subtree
23            curr = curr->right;
24        }
25
26        return ans;
27    }
28};