// #include<iostream>
// using namespace std;

// void f(int arr[],int left,int right){
//     if(left>=right) return ;
//     swap(arr[left],arr[right]);
//     f(arr,left+1,right-1);
// }
// int main(){
//    int arr[]={1,2,3,4};
//    f(arr,0,3);
//    for(int i=0;i<4;i++){
//     cout<<arr[i]<<" ";
//    }
// }

// #include<iostream>
// using namespace std;
// void f(string s,int left,int right){
//     if(left>=right) {
//         cout<<"True";
//         return;
//     }
//     if(s[left]!=s[right]) {
//    cout<<"False";
//    return;
//     }
//   f(s,left+1,right-1);

// }

// int main(){
//   string s="naman";
//    f(s,0,4);
// }