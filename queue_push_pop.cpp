#include<iostream>
using namespace std;

struct queue{
    int size;
    int f;
     int r;
    int *arr;
};


int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q,int val){
    if(isFull(q)){
        cout<<"The Queue is full : "<<endl;
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}


int dequeue(struct queue *q){
    int a=-1;
    if(isEmpty(q)){
        cout<<"the queue is empty : "<<endl;
        
    }
    else{
        q->f++;
        a=q->arr[q->f];
        
    }
    return a;
    
}


int main(){
    struct queue q;
    q.size=4;
    q.f=q.r=0;
    q.arr=(int*)malloc(q.size*sizeof(int));
   
    // cout<<dequeue(&q)<<endl;
    // cout<<dequeue(&q);
    
    cout<<isEmpty(&q)<<endl;
    cout<<isFull(&q)<<endl;
    enqueue(&q,45);
    enqueue(&q,5);
    enqueue(&q,451);
     
     
    //  check
    //  cout<<isEmpty(&q)<<endl;
    // cout<<isFull(&q)<<endl;
    
    // dueue
    cout<<dequeue(&q)<<endl;
    cout<<dequeue(&q)<<endl;
    cout<<dequeue(&q)<<endl;
   

    
    // check
    cout<<isEmpty(&q)<<endl;
cout<<isFull(&q)<<endl;
    
   
        
}














