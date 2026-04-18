1class Solution {
2public:
3    bool judgeCircle(string moves) {
4        int x = 0, y = 0;
5
6        for (char ch : moves) {
7            if (ch == 'U') y++;
8            else if (ch == 'D') y--;
9            else if (ch == 'R') x++;
10            else if (ch == 'L') x--;
11        }
12
13        return x == 0 && y == 0;
14    }
15};