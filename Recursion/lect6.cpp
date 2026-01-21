#include<iostream>
using namespace std;
void f(int ind,vector<int>db,int arr[],int n){
    if(ind==3){
        for(auto it:db){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    db.push_back(arr[ind]);
    f(ind+1,db,arr,n);
    db.pop_back();
    f(ind+1,db,arr,n);

}
int main(){
    int arr[]={1,2,3};
    vector<int>db;
    f(0,db,arr,3);
}