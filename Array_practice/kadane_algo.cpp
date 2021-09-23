#include<iostream>

using namespace std;

int kadane_maxsum(int arr[],int n){               //USING KADANE'S ALGORITHM    //O(N) 
    int curr_sum=0;
    int max_sum=0;

    for(int i=0;i<n;i++){
        curr_sum+=arr[i];
        if(curr_sum<0){
            curr_sum=0;
        }
            max_sum=max(max_sum,curr_sum);
    }
    return max_sum;
}

int main(){
    int arr[]={1,-2,3,4,4,-2};
    int n=sizeof(arr)/sizeof(int);
    
    cout<<"LARGEST SUM IS::"<<kadane_maxsum(arr,n);
    return 0;


}