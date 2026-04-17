1class Solution {
2public:
3    int trap(vector<int>& height) {
4        int n = height.size();
5        if (n == 0) return 0;
6
7        vector<int> ans(n), ans1(n);
8
9        ans[0] = height[0];
10        for (int i = 1; i < n; i++) {
11            ans[i] = max(ans[i - 1], height[i]);
12          
13        }
14
15        ans1[n - 1] = height[n - 1];
16        for (int i = n - 2; i >= 0; i--) {
17            ans1[i] = max(ans1[i + 1], height[i]);
18    
19        }
20
21        int sum = 0;
22
23        for (int i = 0; i < n; i++) {
24            int mn = min(ans[i], ans1[i]);
25            sum += mn - height[i];
26        }
27
28        return sum;
29    }
30};