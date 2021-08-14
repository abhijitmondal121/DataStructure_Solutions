#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *link;

};

Node *head=NULL;

// insert in 1st
void insertBeg(int d){

    Node *ptr=new Node();
    ptr->data=d;
    ptr->link=head;
    head=ptr;
    cout<<ptr->data<<" ";

}


// insert in last
void insertEnd(int d){
    Node *ptr= new Node();
    ptr->data=d;
    ptr->link=NULL;

    if(head==NULL){
        head=ptr;
    }
    else{
        Node *temp=head;
        while(temp->link!=NULL){
            temp==temp->link;
        }
        temp->link=ptr;
        
    }
    
}






int main(){
    Node *ptr=new Node();
    cout<<"Enter the value : "<<endl;
    cin>>ptr->data;
    ptr->link=NULL;
    head=ptr;
    
    insertBeg(12);
    cout<<ptr->data <<" ";
    insertEnd(50);


    return 0;

}