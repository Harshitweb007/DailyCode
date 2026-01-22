// #include<iostream>
// using namespace std;
// void f(int ind,int arr[],vector<int>db,int n,int k){
//     if(ind==n){
//         int sum=0;
//         for(auto it:db){
//             sum+=it;
//         }
//         if(sum==k){
//             for(auto it:db){
//                 cout<<it<<" ";
//             }
//                cout<<endl;
//         }
     
//         return;
//     }
//     db.push_back(arr[ind]);
//     f(ind+1,arr,db,n,k);
//     db.pop_back();
//     f(ind+1,arr,db,n,k);

// }
// int main(){
//     int arr[]={1,2,3};
//     vector<int>db;
//     f(0,arr,db,3,5);
// }



// #include<iostream>
// using namespace std;
// int f(int arr[],int ind,int n,int sum,int fake){
//     if(ind==n){
//         if(sum==fake){
//             return 1;
//         }
//         return 0;
//     }

//     fake+=arr[ind];
//     int l=f(arr,ind+1,n,sum,fake);
//     fake-=arr[ind];
//     int r=f(arr,ind+1,n,sum,fake);
//     return l+r;
// }


// int main(){
//     int arr[]={1,2,3};
//     cout<<f(arr,0,3,3,0);
// }
#include<iostream>
using namespace std;
void f(int arr[],int i,int j){
    if(i>=j) return;
    swap(arr[i],arr[j]);
    f(arr,i+1,j-1);
}
int main(){
    int arr[]={1,2,3,4};
    f(arr,0,3);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
}