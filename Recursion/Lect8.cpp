#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int left=low;
    int right=mid+1;
    int k=0;
    int temp[100];
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp[k]=arr[left];
            left++;
            k++;
        }
        else{
           temp[k]=arr[right];
           k++;
           right++;
        }
    }
    while(left<=mid){
        temp[k]=arr[left];
        left++;
        k++;
    }
    while(right<=high){
        temp[k]=arr[right];
        right++;
        k++;
    }
    for(int i=0;i<k;i++){
        arr[low+i]=temp[i];
    }
}


void mergesort(int arr[],int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}



int main(){
    int arr[]={12,32,12,32,43};
    mergesort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}