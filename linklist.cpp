#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;

};
struct node *start=NULL;



// for create a node

void create(){

    struct  node *newnode,*p;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL){
        cout<<"Out of memory space :"<<endl;
        exit(0);
    }
    cout<<"Enter the data value for the node : "<<endl;
    cin>> newnode->data;
    newnode->next=NULL;

    if(start==NULL){
        start=newnode;
    }
    else{
        p=start;
        while (p->next!=NULL)
        {
            p=p->next;
        }
        p->next=newnode;

        
    }
    

}

int main(){
    create();
}
