#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *link;

};

Node *head=NULL;


void insertBeg(int d){

    Node *ptr=new Node();
    ptr->data=d;
    ptr->link=head;
    head=ptr;
    cout<<ptr->data<<" ";

}








int main(){
    Node *ptr=new Node();
    cout<<"Enter the value : "<<endl;
    cin>>ptr->data;
    ptr->link=NULL;
    head=ptr;
    
    insertBeg(12);
    cout<<ptr->data <<" ";
    


    return 0;

}