#include<iostream>
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


// Print Function 

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




// addAtTheBeginning

node* addAtTheBeginning(node* root){
    int data;
	cin>>data;

    if(root==NULL){
        return new node(data);
    }

    node* temp=new node(data);
    // root = new node(data);
    temp->next=root;
    root=temp;
    return root;
}



// count the size of the linklist

int lsize(node* root){
        int count=0;
    node* t=root;
    while(t!=NULL){
        count++;
        t=t->next;
    }
    return count;
}




// insertAtAnyPosition

node* insertAtAnyPosition(node* root,int pos){

    int count=lsize(root);
    if(pos<=1){
    root=addAtTheBeginning(root);    
    // node* temp=new node(data);
    // temp->next=root;
    // root=temp;
    return root;
    }
    else if(pos>count){
    root=add(root);    
// 	node* temp = root;
// 	while(temp->next!=NULL){
// 		temp = temp->next;
// 	}
// 	temp->next = new node(data);
    return root;  
        
    }
    else{
    int data;
    cin>>data;
    node* temp=root;
    node* prev=NULL;
    while(pos!=1){
        prev=temp;
        temp=temp->next;
        pos--;
    }

    node* newNode=new node(data);
    newNode->next=prev->next;
    prev->next=newNode;
    return root;
    }
    
}





// deleteFromBeginning
 
node* deleteFromBeginning(node* root){

    if(root==NULL){
          cout<<"No node to delete :"<<endl;
        return NULL;
    }
    root=root->next;
    return root;

}



// deleteFromEnd

node* deleteFromEnd(node* root){

    if(root==NULL){
        cout<<"No node to delete :"<<endl;
        return NULL;
    }
    node* prev = NULL;
    node* current=root;
    while(current->next!=NULL){
    
    prev=current;
    current=current->next;
    }
    prev->next=NULL;
    return root;

}



// deleteFromAnyPoint

node* deleteFromAnyPoint(node* root,int pos){
    
    int count=lsize(root);
    
    if(pos<=1){
    root=deleteFromBeginning(root);    
    return root;
    }
    else if(pos>count){
    root=deleteFromEnd(root);    
    return root;  
    }
    else{
    node* temp=root;
    node* prev=NULL;
    while(pos!=1){
        prev=temp;
        temp=temp->next;
        pos--;
    }


    prev->next=temp->next;
    return root;
    }
    
}




int main(){
    
    node* root = NULL;
    // cout<<"Enter number of nodes you want to enter to the linkedlist: ";
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     root = add(root);
    // }
    // print(root);
    // cout<<endl;
    while(1){
    cout<<endl<<"1 for addAtTheBeginning: "<<endl<<"2 for addAtTheEnd :"<<endl<< "3 for addAtTheAnyPosition : "<<endl<<"4 for deleteFromBeginning"<<endl<<"5 for deleteFromEnd"<<endl<<"6 for print :"<<endl<<"7 for size of linklist "<<endl<<"8 for Exit"<<endl<<"9 for deleteFromAnyPoint"<<endl;
    int x;
    cin>>x;
    switch(x) {
  case 1:
      root = addAtTheBeginning(root);
    
    break;
      case 2:
      root = add(root);
    
    break;
  case 3:
        int x;
    cout<<"Enter the position you want to insert : "<<endl;
    cin>>x;
    root=insertAtAnyPosition(root,x);
    
    break;
      case 4:
     root = deleteFromBeginning(root);
    print(root);
    break;
      case 5:
       root = deleteFromEnd(root);
        
    break;
    case 6:
    print(root);
    break;
    case 7:
    int k;
    k=lsize(root);
    cout<<"Size : "<<k<<endl;
    break;
    case 8:
    return 0;
    case 9:
        int d;
    cout<<"Enter the position you want to delete : "<<endl;
    cin>>d;
    root=deleteFromAnyPoint(root,d);
    
    break;
  default:
    cout<<"you enter wrong input :"<<endl;
    }
   
   
    }   
}

    
    