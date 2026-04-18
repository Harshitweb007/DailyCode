1class Solution {
2public:
3    int mirrorDistance(int n) {
4        int org=n;
5        int s=0;
6        while(org>0){
7            int r=org%10;
8            s=s*10+r;
9            org=org/10;   
10        }
11        int ans=abs(n-s);
12        return ans;
13    }
14};