#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int t=0;
        cin>>t;
        nums.push_back(t);
    }
    vector<vector<int>> dp (n,vector<int>(x+1,0));

    for(int t=0;t<x;t++){
        if(x%nums[0]==0){
            dp[0][t]=x/nums[0];
        }
        else dp[0][t]=INT_MAX;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<=x;j++){
            int not_take = 0+dp[i-1][j];
            int take = INT_MAX;
            if(nums[i]<=j){
                    take = 1+dp[i][x-nums[i]];
            }
            dp[i][j]=min(take,not_take);
        }
        
    }
    cout<<"THE MIN NUMBER OF COINS ARE:: "<<dp[n-1][x];

    return 0;
}