#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high){
   int left=low;
   int right=mid+1;
   int k=0;
   int temp[100];
   while(mid>=left && high>=right){
      if(arr[right]>arr[left]){
         temp[k]=arr[left];
         k++;
         left++;
      }
      else{
         temp[k]=arr[right];
         k++;
         right++;
      }
   }
   while(mid>=left){
      temp[k]=arr[left];
      left++;
      k++;
   }
   while(high>=right){
      temp[k]=arr[right];
      right++;
      k++;
   }
   for(int i=0;i<k;i++){
      arr[i+low]=temp[i];
   }
}
void mergesort(int arr[],int low,int high ){
   if(low>=high)return;
   int mid=(low+high)/2;
   mergesort(arr,low,mid);
   mergesort(arr,mid+1,high);
   merge(arr,low,mid,high);

}
int main(){
   int arr[]={1,54,23,12};
   mergesort(arr,0,3);
   for(int i=0;i<4;i++){
      cout<<arr[i]<<" ";
   }
}