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
13public:
14    vector<vector<int>> verticalTraversal(TreeNode* root) {
15        queue<pair<TreeNode*,pair<int,int>>>todo;
16        map<int,map<int,multiset<int>>>nodes;
17        todo.push({root,{0,0}});
18        while(!todo.empty()){
19            auto p=todo.front();
20            todo.pop();
21            int x=p.second.first;
22            int y=p.second.second;
23               TreeNode* node=p.first;
24            nodes[x][y].insert(node->val);
25         
26            if(node->left){
27                todo.push({node->left,{x-1,y+1}});
28            }
29            if(node->right){
30                todo.push({node->right,{x+1,y+1}});
31            }
32        }
33        vector<vector<int>>ans;
34
35for(auto p : nodes) {
36    vector<int> col;
37
38    for(auto q : p.second) {
39        for(auto val : q.second) {
40            col.push_back(val);
41        }
42    }
43
44    ans.push_back(col);
45}
46
47return ans;
48        return ans;
49    }
50};