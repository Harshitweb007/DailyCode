#include<iostream>
using namespace std;
void f(int n){
    if(n==0) return;
    cout<<"pre "<<n<<endl;
    f(n-1);
    cout<<"in "<<n<<endl;
    f(n-1);
    cout<<"post "<<n<<endl;
}
int main(){
    f(2);
}