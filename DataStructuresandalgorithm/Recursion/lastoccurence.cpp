#include<bits/stdc++.h>

using namespace std;

int lastoccurence(int arr[],int n,int key){
    if(n==0){
        return -1;
    }
    int sub = lastoccurence(arr+1,n-1,key);
    if(sub==-1){
        if(arr[0]==key){
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        return sub+1;
    }


}

int main(){
    int arr[]={1,2,7,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=7;
    cout<<lastoccurence(arr,n,key);
    return 0;
}