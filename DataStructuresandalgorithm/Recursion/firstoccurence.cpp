#include<bits/stdc++.h>

using namespace std;

int firstoccurence(int arr[],int n,int key){
    //basecase
    if(n==0){
        return -1;
    }
    if(arr[0]==key){
        return 0;
    }
    int subind = firstoccurence(arr+1,n-1,key);
    if(subind!=-1){
        return subind+1;
    }
    return -1;


}

int main(){
    int arr[] = {1,2,3,49,7,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    cout<<firstoccurence(arr,n,key);
    return 0;
}