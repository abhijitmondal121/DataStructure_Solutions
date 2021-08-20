// #include<iostream>
// using namespace std;

// struct stack{
//     int size ;
//     int top;
//     int * arr;
// };



// int isEmpty(struct stack*ptr){
//     if(ptr->top==-1){
//         return 1;
//     }
//     else{ 
//         return 0;
//     }
// }

// int isFull(struct stack* ptr){
//     if(ptr->top == ptr->size - 1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }



// int push(struct stack* ptr,int val){
//     if(isFull(ptr)){
//         cout<<"stack is over flow"<<endl;
//     }
//     else{
//         ptr->top++;
//         ptr->arr[ptr->top]=val;
//     }
// }

// int pop(struct stack* ptr){
//     if(isEmpty(ptr)){
//         cout<<"stack underflow"<<endl;
//         return -1;
//     }
//     else{
//         int val=ptr->arr[ptr->top];
//         ptr->top--;
//         return val;
//     }
// }


// int main(){
//     struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
//     sp->size=10;
//     sp->top=-1;
//     sp->arr=(int*)malloc(sp->size * sizeof(int));
//     cout<<"stack is created"<<endl;
    
    
    
    
//     cout<<"Before pushing, Full:"<<isFull(sp)<<endl;
//     cout<<"Before pushing, Empty:"<<isEmpty(sp)<<endl;
    
//     // push the items
    
//     push(sp, 1);
//     push(sp, 23);
//     push(sp, 99);
//     push(sp, 75);
//     push(sp, 3);
//     push(sp, 64);
//     push(sp, 57);
//     push(sp, 46);
//     push(sp, 89);
//     push(sp, 6);
//     cout<<"After pushing, Full:"<<isFull(sp)<<endl;
//     cout<<"After pushing, Empty:"<<isEmpty(sp)<<endl;
    
    
//     // pop the items
//      cout<<"Popped from the stack:"<<pop(sp)<<endl;
//       cout<<"Popped from the stack:"<<pop(sp)<<endl;
//        cout<<"Popped from the stack:"<<pop(sp)<<endl;
    
    
// }





#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack * ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack * ptr){
    if(ptr->top==-1){
        return 1;
        
    }
    else{
        return 0;
    }
}

int push(struct stack* ptr,int val){
    if(isFull(ptr)){
        cout<<"Stack is overflow : "<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}


int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        cout<<"Stack is underflow : "<<endl;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}




int main(){
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=4;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size* sizeof(int));
    cout<<"stack is created "<<endl;
    
    push(sp,20);
    push(sp,50);
    push(sp,79);
    push(sp,67);
    //  push(sp,6);
    
    
    cout<<"After pushing stack : "<<isFull(sp)<<endl;
    cout<<"After poping stack : "<<isEmpty(sp)<<endl;
    
    cout<<" popping stack : "<<pop(sp)<<endl;
    
    cout<<" popping stack : "<<pop(sp)<<endl;
    
    cout<<"After pushing stack : "<<isFull(sp)<<endl;
    cout<<"After poping stack : "<<isEmpty(sp)<<endl;
    
    
    
}






