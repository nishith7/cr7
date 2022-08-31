#include<bits/stdc++.h>

using namespace std;

int dp[101][1001];
set<int>s;
int n;

int fun(int ind,int sum,vector<int> &nums){
    if(ind==n){
        s.insert(sum);
        return 0;
    }
    if(dp[ind][sum]!=-1){
        return dp[ind][sum];
    }
    int take = fun(ind+1,sum+nums[ind],nums);
    int not_take = fun(ind+1,sum,nums);

    return dp[ind][sum] = take+not_take;
}
vector<int> DistinctSum(vector<int>nums){
    n = nums.size();
    memset(dp,-1,sizeof(dp));
    fun(0,0,nums);
    vector<int>res;
    for(auto val:s){
        res.push_back(val);
    }
    return res;
}

int main(){

    return 0;

}