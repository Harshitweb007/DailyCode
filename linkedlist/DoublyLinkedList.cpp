#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int d){
       data=d;
       next=nullptr;
       prev=nullptr;
    }
};
int main(){
    Node*head=nullptr;
    Node*tail=nullptr;
    Node*prev=nullptr;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head==nullptr){
            head=new Node(arr[i]);
            tail=head;
            prev=tail;;
        }else{
            tail->next=new Node(arr[i]);
            tail->next->prev=tail;
            tail=tail->next;
        }
    }
    Node* newnode=new Node(5);
    newnode->next=head;
    newnode->next->prev=newnode;
    head=newnode;
    

    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}