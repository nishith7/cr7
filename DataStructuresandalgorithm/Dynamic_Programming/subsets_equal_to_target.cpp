#include<bits/stdc++.h>

using namespace std;

bool solve(int ind,int k,vector<int> &arr,vector<vector<int>> &dp){
    if(k==0) return true;
    if(ind==0) return (arr[0]==k);
    
    if(dp[ind][k]!=-1) return dp[ind][k];
    
    bool nottake = solve(ind-1,k,arr,dp);
    bool take = false;
    if(arr[ind]<=k){
        take = solve(ind-1,k-arr[ind],arr,dp);
    }
    
    return dp[ind][k] = nottake | take;
    
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<vector<int>> dp(n,vector<int>(k+1,-1));
    return solve(n-1,k,arr,dp);
}

int main(){
    vector<int> arr;
    int n;
    int k;
    cin>>n;
    cin>>k;
    int temp=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }

    cout<<subsetSumToK(n,k,arr);

    return 0;
}