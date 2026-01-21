#include<iostream>
using namespace std;
void f(int cnt){

    if(cnt==3) return;

    cout<<cnt;
    cnt++;

    f(cnt);
    cout<<"Backtracing"<<cnt;

}
int main(){
    f(0);
}