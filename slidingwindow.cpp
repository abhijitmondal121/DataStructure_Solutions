#include<bits/stdc++.h>
using namespace std;

void slidingbrutforce(int a[],int n,int k){
    int maxsum=0;
    for(int i=0;i<=n-k;i++){
        int windowsum=0;
        for(int j=i;j<i+k;j++){
            windowsum+=a[j];
        }
        maxsum=max(maxsum,windowsum);
    }
    cout<<maxsum;
}


void slidingOptimal(int a[],int n,int k){
    
    // [1,9,-1,-2],7,3,-1,2  7
    // 1,[9,-1,-2,7],3,-1,2  7-1+7=13
    // 1,9,[-1,-2,7,3],-1,2  13-9+3=7
    // 1,9,-1,[-2,7,3,-1],2  7+1-1=7
    // 1,9,-1,-2,[7,3,-1,2]  7+2-2=7
    
    int windowsum=0,maxsum=0;
    
    for(int i=0;i<k;i++){
        windowsum+=a[i];
    }
    for(int end=k;end<n;end++){
        windowsum+=a[end]-a[end-k];
        maxsum=max(maxsum,windowsum);
    }
    cout<<maxsum;
}



int main(){
    
    int n=8;
    int a[n]={1,9,-1,-2,7,3,-1,2};
    // slidingOptimal(a,n,4);
    slidingbrutforce(a,n,4);
    return 0;
}


 