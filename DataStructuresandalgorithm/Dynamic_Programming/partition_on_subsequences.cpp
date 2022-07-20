#include<bits/stdc++.h>

using namespace std;

bool check(vector<int> &arr,int n,int sum,vector<vector<int>> &dp){
    
    dp[0][0] = 1;
    dp[1][0] = 1;
    int init =0;
    for(int i=0;i<n;i++){
        for(int j =0;j<=sum;j++){
            int nottake = dp[init^1][j];
            int take = 0;
            if(j>=arr[i]){
                take = dp[init^1][j-arr[i]];
            }
            dp[init][j] = take | nottake;
            
        }
        init = init^1;
    }
    return dp[init^1][sum];
    
}
bool canPartition(vector<int> &arr, int n)
{
	// Write your code here.
    int sum = 0;
    for(int i=0;i<n;i++) sum+=arr[i];
    if(sum&1) return false;
    vector<vector<int>> dp(2,vector<int> (sum/2+1,0));
    return check(arr,n,sum/2,dp);
}
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    int temp=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<canPartition(arr,n);
    return 0;

}