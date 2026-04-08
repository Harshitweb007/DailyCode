1class Solution {
2public:
3    int trap(vector<int>& height) {
4        int n = height.size();
5        if (n == 0) return 0;
6
7        vector<int> ans(n), ans1(n);
8
9        // Your ans[] array = maximum height on left including current index
10        ans[0] = height[0];
11        for (int i = 1; i < n; i++) {
12            ans[i] = max(ans[i - 1], height[i]);
13            // Instead of nearest greater element,
14            // store maximum seen so far from the left
15        }
16
17        // Your ans1[] array = maximum height on right including current index
18        ans1[n - 1] = height[n - 1];
19        for (int i = n - 2; i >= 0; i--) {
20            ans1[i] = max(ans1[i + 1], height[i]);
21            // Instead of nearest greater element,
22            // store maximum seen so far from the right
23        }
24
25        int sum = 0;
26
27        for (int i = 0; i < n; i++) {
28            int mn = min(ans[i], ans1[i]);
29            sum += mn - height[i];
30        }
31
32        return sum;
33    }
34};