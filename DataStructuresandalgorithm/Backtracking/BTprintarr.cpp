#include<bits/stdc++.h>

using namespace std;

void print(int *arr,int n){
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}

void printarr(int *arr,int n,int i,int val){ 
    //base case
    if(i==n){
        print(arr,5);
        return;
    }
    //rec case
    arr[i]=val;
    printarr(arr,n,i+1,val+1);

    //backtracking case
    arr[i] = -1*arr[i];

}



int main(){
    int arr[100]={0};
    printarr(arr,5,0,1);
    print(arr,5);

    return 0;

}