#include<bits/stdc++.h>
using namespace std;

// Create a linklist
class node{
    public:
	int data;
	node* next;
 
	node(int data){
		this->data = data;
        this->next = NULL;
	}
 
};

void print(node* root){
    while(root!=NULL){
        cout<<root->data<<" ";
        root = root->next;
    }
    return;
}

// Add the end 
node* add(node* root){
	int data;
	cin>>data;
	if(root==NULL){
		root = new node(data);
        return root;
	}
 
	node* temp = root;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = new node(data);
    return root;
}

node* reverse(node* root){
    
    node* prev=NULL;
    node* cur=root;
    node* n=NULL;
    while(cur!=NULL){
        n=cur->next;
        cur->next=prev;
        prev=cur;
        cur=n;
    }
    
    root=prev;
    
    return root;
    
}



int main(){
    
    node* root = NULL;
    cout<<"Enter number of nodes you want to enter to the linkedlist: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        root = add(root);
    }
    print(root);
    cout<<endl;
    
    cout<<"reverse : "<<endl;
    root=reverse(root);
    print(root);

}













