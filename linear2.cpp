#include<iostream>
using namespace std;
 
 int main(){

     int n,target,flag=0;
     cout<<"enter the range : "<<endl;
     cin>>n;
     int arr[n] , f=sizeof(arr);
     cout<<"enter the value : "<<endl;
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     cout<<"enter the target you want to search : "<<endl;
    cin>>target;

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=1;
            break;
        }

     }
     if(flag==1){
         cout<<"the element found in the array : "<<endl;
     }
     else{
            cout<<"element not found "<<endl;
        }
 }