1class Solution {
2public:
3    string removeDuplicates(string s) {
4        stack<char> st;
5        int n = s.size();
6
7        if(n == 0) return "";
8
9        st.push(s[0]);
10
11        for(int i = 1; i < n; i++){
12            if(!st.empty() && st.top() == s[i]){
13                st.pop();
14            }
15            else{
16                st.push(s[i]);
17            }
18        }
19
20        // Build result from stack
21        string ans = "";
22        while(!st.empty()){
23            ans = st.top() + ans;  // reverse order fix
24            st.pop();
25        }
26
27        return ans;
28    }
29};
30