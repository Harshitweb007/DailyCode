1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int start = 0;
5        int end = nums.size() - 1;
6
7        while (start <= end) {
8            int mid = start + (end - start) / 2;
9
10            if (nums[mid] == target) {
11                return mid;
12            }
13            else if (nums[mid] < target) {
14                start = mid + 1;
15            }
16            else {
17                end = mid - 1;
18            }
19        }
20
21        return -1;
22    }
23};