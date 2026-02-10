#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=nullptr;
    }
};
int main(){
    int arr[]={1,2,3,4,5,6};
    Node*head=nullptr;
    Node*tail=nullptr;
    for(int i=0;i<6;i++){
        if(head==nullptr){
            head=new Node(arr[i]);
            tail=head;

        }
        else{
            tail->next=new Node(arr[i]);
            tail=tail->next;
        }
    }
 Node* temp = head;
Node* curr;
Node* prev = nullptr;

while(temp){
    curr = temp->next;   // save next
    temp->next = prev;   // reverse link
    prev = temp;         // move prev
    temp = curr;         // move temp
}

temp = prev;
while(temp){
    cout << temp->data << "  ";
    temp = temp->next;
}



}