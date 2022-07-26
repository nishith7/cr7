#include<bits/stdc++.h>

using namespace std;

int cutRod(vector<int> &price, int n)
{
	// Write your code here.
    vector<vector<int>> dp(n,vector<int>(n+1,-1));
    for(int N=0;N<=n;N++){
        dp[0][N] = N*price[0];
    }
    for(int ind = 1;ind<n;ind++){
        for(int N=0;N<=n;N++){
            int not_take = 0+dp[ind-1][N];
            int take = INT_MIN;
            int rod_len = ind+1;
            if(rod_len<=N){
                take = price[ind] + dp[ind][N-rod_len];
            }
            dp[ind][N] = max(take,not_take);
        }
    }
    return dp[n-1][n];
    
}

int main(){
    vector<int> price = {2,5,7,8,10};
    int n = 5;
    cout<<"THE MAX PRICE IS:: "<<cutRod(price,n);

    return 0;
}