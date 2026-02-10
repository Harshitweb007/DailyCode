// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int>st;
//     int arr[]={1,2,3,4,5,6};
//     for(int i=0;i<6;i++){
//         st.push(arr[i]);
//     }
//     stack<int>temp;
//     while(st.size()>0){
//         temp.push(st.top());
//         st.pop();
//     }
//     while(temp.size()>0){
//         cout<<temp.top()<<" ";
//         temp.pop();


//     }
// }
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    stack<int>gt;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        st.push(arr[i]);
    }
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    st.push(40);
    while(gt.size()>0){
        st.push(gt.top());
        gt.pop();
    }
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }


}