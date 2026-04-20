1class Solution {
2public:
3    int maxDistance(vector<int>& colors) {
4        int n = colors.size();
5        int ans = 0;
6
7        for (int i = 0; i < n; i++) {
8            if (colors[i] != colors[0]) {
9                ans = max(ans, i);
10            }
11
12            if (colors[i] != colors[n - 1]) {
13                ans = max(ans, n - 1 - i);
14            }
15        }
16
17        return ans;
18    }
19};