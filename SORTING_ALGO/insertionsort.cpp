#include<iostream>

using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>arr[curr]){      //this loop is for finding right index for current
            arr[prev+1]=arr[prev];
            prev=prev-1;
        }
        arr[prev+1]=curr;
    }
}


int main(){
    int arr[]={-2,3,4,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    insertion_sort(arr,n);
    for(auto x:arr){
        cout<<x<<" ,";
    }
    return 0;
}