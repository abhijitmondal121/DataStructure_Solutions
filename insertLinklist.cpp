#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *link;

};

Node *head=NULL;

int main(){
    Node *ptr=new Node();
    cout<<"Enter the value : "<<endl;
    cin>>ptr->data;
    ptr->link=NULL;
    head=ptr;
    return 0;

}