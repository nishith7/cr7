#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
// Write your code here 
    sort(arr.begin(),arr.end());
    int missing_num = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            missing_num = arr[i];
        }else{
           sum+=arr[i]; 
        }
    }
    int total = (n*(n+1)/2);
    int ans = abs(total-sum);
    return make_pair(ans,missing_num);
}