#include<iostream>
#include<stack>
using namespace std;
stack<int>st;
int main(){
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        st.push(arr[i]);
    }
   while(st.size()>0){
    cout<<st.top()<<" ";
    st.pop();
   }
}