#include<iostream>
using namespace std;
int f(int n){
    if(n<=1) return n;
    int s=f(n-1);
    int s1=f(n-2);
    return s+s1;
}
int main(){
    int n=4;
    int sum=f(n);
    cout<<sum;
}