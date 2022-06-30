#include<bits/stdc++.h>
using namespace std;


bool arrcheck(int arr[],int n){
    if(n==1 || n==0){
        return true;
    }
    if(arr[0]<arr[1] && arrcheck(arr+1,n-1)){
        return true;
    }
    return false;


}


int main(){
    int arr[]={1,2,3,5,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<arrcheck(arr,n);
    return 0;
    }