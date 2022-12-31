#include <iostream>
using namespace std;
class Node {
public:
int data;
Node* next;
// constructor 
Node(int data){
    this->data=data;
    this->next=NULL;
}
};
// insert at head 
 void insertAtHead(Node* &head,int a){
Node* temp=new Node(a);
temp->next=head;
head = temp;
 }
 // print head 
 void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<< " ";
        temp=temp->next;

    }
 }
int main(){
    Node* node1=new Node(10);
    //Node* node2=new Node(20);
    cout<<node1->data<<endl;
    //cout<<node2->data<<endl;
    Node* head=node1;
    print(head);
    insertAtHead(head,15);
    print(head);
    return 0;
}
