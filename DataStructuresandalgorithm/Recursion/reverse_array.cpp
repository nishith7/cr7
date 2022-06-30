#include<bits/stdc++.h>

using namespace std;

void do_reverse(int arr[],int n,int i){
    if(i>=n-1){
        return;
    }
    swap(arr[i],arr[n-1]);
    do_reverse(arr,n-1,i+1);


}

int main(){
    int n = 6,i=0;
    int arr[n] = {1,2,3,4,5,6};
    do_reverse(arr,n,i);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}