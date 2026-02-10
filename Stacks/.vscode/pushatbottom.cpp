#include<iostream>
#include<stack>
using namespace std;
void pushatbottom(int n,stack<int>&ans){
    stack<int>st;
    while(!ans.empty()){
        st.push(ans.top());
        ans.pop();
    }
    ans.push(n);
    while(!st.empty()){
        ans.push(st.top());
        st.pop();
    }
}
int main(){
    stack<int>ans;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        ans.push(arr[i]);
    }
    pushatbottom(67,ans);
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
}