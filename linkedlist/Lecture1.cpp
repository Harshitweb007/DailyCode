#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        next=nullptr;
    }
};
int main(){
    Node*head=nullptr;
    Node*tail=nullptr;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head==nullptr){
            head=new Node(arr[i]);
            tail=head;
        }
        else{
            tail->next=new Node(arr[i]);
            tail=tail->next;
        }
    }
    Node*temp=head;
    int elem=3;
    while(temp){
        if(temp->data==elem){
            cout<<"true";
        }
        temp=temp->next;
    }
  
    
}