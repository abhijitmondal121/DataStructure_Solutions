#include<iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int top;
    int size;
    
    stack(int size){
        this->size=size;
        arr=new int(size);
        top=-1;
    }
    
    void push(int element){
        if(size-top > 1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is empty"<<endl;
        }
        
    }
    int peek(){
        return arr[top];
    }
    
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
        
    }
    
};
int main(){
    stack st(5);
    st.push(22);
    st.push(12);
    st.push(5);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
}






