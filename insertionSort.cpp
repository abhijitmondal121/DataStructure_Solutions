#include<iostream>
using namespace std;

void printArray(int* A,int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}


void insertionSort(int *A,int n){
    int key,j;
    for(int i=1;i<=n-1;i++){
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}



int main(){
    int A[]={12,54,3,23,7,9,45};
    int n=7;
    cout<<"Before Sort : "<<endl;
    printArray(A,n);
    cout<<"After Sort : "<<endl;
    insertionSort(A,n);
    printArray(A,n);
}