#include<iostream>

using namespace std;

void printpairs(int arr[],int n){
    int s=0;
    int e=n-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    printpairs(arr,n);
    return 0;

}