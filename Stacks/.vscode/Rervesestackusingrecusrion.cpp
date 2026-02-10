#include<iostream>
#include<stack>
using namespace std;
void displayreverse(stack<int>&ans){
    if(ans.empty()) return;
    int x=ans.top();
    ans.pop();
    displayreverse(ans);
    ans.push(x);
        cout<<ans.top()<<" ";


}
int main(){
    stack<int>ans;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        ans.push(arr[i]);
    }
    displayreverse(ans);
}