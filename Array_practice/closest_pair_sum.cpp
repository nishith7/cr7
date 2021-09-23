#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void closestSum(int arr[], int n,int x){
    // your code goes here
    int pair_sum=INT_MIN;
    int n1,n2;
    
    int r=n-1,l=0;
    while (r > l)
    {
       // Check if this pair is closer than the closest pair so far
       if (abs(arr[l] + arr[r] - x) < pair_sum)
       {
           n1 = l;
           n2 = r;
           pair_sum = abs(arr[l] + arr[r] - x);
       }
 
       // If this pair has more sum, move to smaller values.
       if (arr[l] + arr[r] > x)
           r--;
       else // Move to larger values
           l++;
    }
    cout<<arr[n1]<<" and "<<arr[n2];
}


int main(){
    int arr[]={10,22,28,29,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=54;
    closestSum(arr,n,x);
    return 0;
}