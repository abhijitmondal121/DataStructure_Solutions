#include<bits/stdc++.h>
using namespace std;

void insertion(int a[],int n){
    for(int i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        for(;j>=0;j--){
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
     int n=10;
     int a[n]={90,2,78,4,67,1,34,6,89,7};

    insertion(a,n);
     return 0;
}