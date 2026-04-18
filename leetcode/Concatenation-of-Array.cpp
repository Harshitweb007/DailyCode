1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4
5        vector<int>ans;
6        for(int i=0;i<nums.size();i++){
7            ans.push_back(nums[i]);
8        }
9         for(int i=0;i<nums.size();i++){
10            ans.push_back(nums[i]);
11        }
12        return ans;
13        
14    }
15};