1class Solution {
2public:
3    int getSum(int n) {
4        int sum = 0;
5        while(n > 0) {
6            int digit = n % 10;
7            sum += digit * digit;
8            n /= 10;
9        }
10        return sum;
11    }
12    
13    bool isHappy(int n) {
14        int slow = n;
15        int fast = n;
16        
17        do {
18            slow = getSum(slow);              // move 1 step
19            fast = getSum(getSum(fast));      // move 2 steps
20        } while(slow != fast);
21        
22        return slow == 1;
23    }
24};
25