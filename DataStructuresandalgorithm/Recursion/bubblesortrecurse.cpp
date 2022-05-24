#include<bits/stdc++.h>

using namespace std;



void bubble(int arr[],int n,int i){
    if(n==1){
        return;
    }
    if(i==n-1){
        bubble(arr,n-1,0);
        return;
    }
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
    bubble(arr,n,i+1);
    
    
}


int main(){
    int arr[]={5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    bubble(arr,n,i);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

   return 0;
}

