#include<iostream>
using namespace std;

int main(){
int a[10]={2,4,5,8,9,12,16,19,22,25};

int target=5,f=sizeof(a);

for(int i=0;i<f;i++){
    if(a[i]==target){
        cout<<"element found at : "<<i+1<<endl;
        break;
    }
      
    
  if (i == f)
      cout<<"element found at : "<<target<<endl;
}

}
