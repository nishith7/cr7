#include<bits/stdc++.h>

using namespace std;

int merge(int arr[],int temp[],int left,int mid,int right){
    int i,j,k;
    i = left;
    j = mid;
    k = left;
    int count = 0; 

    while((i<= mid-1) && (j<=right)){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];

            count = count+(mid-i);
        }
    }
    while (i <= mid - 1)
        temp[k++] = arr[i++];
  
    /* Copy the remaining elements of right subarray
       (if there are any) to temp*/
    while (j <= right)
        temp[k++] = arr[j++];
  
    /*Copy back the merged elements to original array*/
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
  
    return count;
}

int _mergesort(int arr[],int temp[],int left,int right){
    int mid,count = 0;
    if(right>left){
        mid = (left+right)/2;
        count+=_mergesort(arr,temp,left,mid);
        count+=_mergesort(arr,temp,mid+1,right);

        count+=merge(arr,temp,left,mid+1,right);
    }
    return count;
}

int main(){
    int arr[]={5,3,2,4,1};
    int n = sizeof(arr)/arr[0];
    int temp[n];
    int ans = _mergesort(arr,temp,0,n-1);
    cout << " Number of inversions are " << ans;

    return 0; 
}