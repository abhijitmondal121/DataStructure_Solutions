#include <iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<" NULL "<<endl;
}

void InsertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &head,int d){
    Node* n=new Node(d);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void InsertAtAnyposition(Node* &head,int position,int d){
    if(position==1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt < position-1){
        temp=temp->next;
        cnt++;
    }
    Node* n=new Node(d);
    n->next=temp->next;
    temp->next=n;
    
}
void DeleteAtHead(Node* &head){
    Node* todete=head;
    head=head->next;
    
    delete todete;
}
void DeleteAtAnyposition(Node* &head,int position){
    if(head=NULL){
        return;
    }
    if(head->next=NULL){
        DeleteAtHead(head);
        return;
    }
    if(position==1){
        DeleteAtHead(head);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt < position-1){
        temp=temp->next;
        cnt++;
    }
    Node* todete=temp->next;
    temp->next=temp->next->next;
    delete todete;
}

void deleteduplicatefromsorted(Node* &head){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    while(temp !=NULL){
        if((temp->next !=NULL) && temp->data ==temp->next->data ){
            Node* todete=temp->next;
            temp->next=temp->next->next;
            delete todete;
        }
        else{
            temp=temp->next;
        }
        
    }
}

int main()
{
  Node* Node1= new Node(12);
  Node* head=Node1;
  print(head);
  InsertAtHead(head,10);
  print(head);
  InsertAtTail(head,15); 
  InsertAtTail(head,25); 
  InsertAtTail(head,25);
  InsertAtTail(head,25);
  InsertAtTail(head,50);
  InsertAtTail(head,50);
  InsertAtTail(head,50);
  InsertAtTail(head,60);
  print(head);
//   InsertAtAnyposition(head,6,35);
//   print(head);
  deleteduplicatefromsorted(head);
  print(head);
//   DeleteAtAnyposition(head,1);
//   print(head);
    return 0;
}
