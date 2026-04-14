1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int start = 0;
5        int end = nums.size() - 1;
6
7        while (start <= end) {
8            int mid = start + (end - start) / 2;
9
10            if (nums[mid] == target)
11                return mid;
12
13            // Left half is sorted
14            if (nums[start] <= nums[mid]) {
15                if (target >= nums[start] && target < nums[mid]) {
16                    end = mid - 1;
17                } else {
18                    start = mid + 1;
19                }
20            }
21            // Right half is sorted
22            else {
23                if (target > nums[mid] && target <= nums[end]) {
24                    start = mid + 1;
25                } else {
26                    end = mid - 1;
27                }
28            }
29        }
30
31        return -1;
32    }
33};