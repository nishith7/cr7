#include<iostream>

using namespace std;
  
int subarraysum(int arr[],int n){                                        //USING PREFIX SUM    //O(N^2)
    int largest_sum=0;
    int prefix_sum[n]={0};
    prefix_sum[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix_sum[i]=prefix_sum[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int subsum= i>0 ? prefix_sum[j]-prefix_sum[i-1] : prefix_sum[j];
            
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