#include<bits/stdc++.h>
using namespace std;

void selection(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min= i;
        for(int j=i+1;j<n;j++){
            if(a[j] < a[min]){
                min=j;
            }
        }
        swap(a[min],a[i]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}




int main(){
    int n=10;
    int a[n]={7,2,1,9,56,4,89,3,12,11};
    selection(a,n);
    
    
}