#include<iostream>
using namespace std;

int main(){
int a[10]={2,4,5,8,9,12,16,19,22,25};

int target=19,f=0,l=sizeof(a)-1,mid;

while(f<l){
    mid=(f+l)/2;
    if(a[mid]==target){
        cout<<"your "<<mid+1;
    }
    
    if(a[mid]<target){
        f=mid+1;
    }
    
    else{
        l=mid-1;
    }
}


}