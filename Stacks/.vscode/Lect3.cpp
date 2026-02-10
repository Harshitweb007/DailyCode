#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> ans;
    int arr[]={4,1,2,5,4,3,4,8,2,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int nge[n];

    nge[n-1] = -1;
    ans.push(arr[n-1]);

    for(int i = n-2; i >= 0; i--){
        while(!ans.empty() && ans.top() <= arr[i]){
            ans.pop();
        }

        if(ans.empty()){
            nge[i] = -1;
        } else {
            nge[i] = ans.top();
        }

        ans.push(arr[i]);
    }

    for(int i = 0; i < n; i++){
        cout << nge[i] << " ";
    }
}
