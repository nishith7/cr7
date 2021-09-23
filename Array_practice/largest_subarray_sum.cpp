#include<iostream>

using namespace std;

int subarraysum(int arr[],int n){                                 //USING BRUTE FORCE APPROACH    //O(N^3)
    int largest_sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int subsum=0;
            for(int k=i;k<=j;k++){
                subsum+=arr[k];
            }
            largest_sum=max(largest_sum,subsum);
        }
    }
    return largest_sum;

}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    
    cout<<"LARGEST SUM IS::"<<subarraysum(arr,n);
    return 0;


}