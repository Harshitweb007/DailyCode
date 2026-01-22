#include<iostream>
using namespace std;
void f(int ind,int arr[],vector<int>ans,vector<vector<int>>ans1,int target,int n){
    if(ind==n){
        if(target==0){
            ans1.push_back(ans);
        }
        return;
    }
    for(int i=ind;i<=n;i++){
        if(i>ind && arr[i]==arr[i-1]) continue;
        if(arr[i]>target)break;
        ans.push_back(arr[i]);
        f(ind,arr,ans,ans1,target,n);
        ans.pop_back();
    }
}

int main(){
    int arr[]={1,2,3};
    int target=2;
    vector<int>ans;
    vector<vector<int>>ans1;
    f(0,arr,ans,ans1,target,2);
}