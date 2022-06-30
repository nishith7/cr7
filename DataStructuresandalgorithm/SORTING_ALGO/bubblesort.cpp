#include<iostream>

using namespace std;

void bubble_sort(int arr[],int n){                     //here, the elements iteration is done n-1 and TM:O(N^2)
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[]={-2,3,4,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    for(auto x:arr){
        cout<<x<<" ,";
    }
    return 0;
}

