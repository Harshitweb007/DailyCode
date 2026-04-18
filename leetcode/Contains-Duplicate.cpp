1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        set<int> s;
5        for(int i=0;i<nums.size();i++){
6            s.insert(nums[i]);
7        }
8        if(s.size()==nums.size()){
9            return false;
10        }
11        else{
12            return true;
13        }
14        
15    }
16};