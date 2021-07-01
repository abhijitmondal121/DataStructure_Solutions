#include<iostream>
using namespace std;
int main(){
	int n=10,temp;
	int a[n]={7,2,4,8,1,9,11,3,22,12};
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	cout<<"sorted array : "<<endl;
	for(int j=0;j<n;j++){
		cout<<a[j]<<" ";
	}
}