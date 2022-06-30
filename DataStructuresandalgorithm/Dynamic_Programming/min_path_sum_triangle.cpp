#include<bits/stdc++.h>

 
using namespace std;

int f(int i,int j,vector<vector<int>>& triangle,int n,vector<vector<int>> &dp){
    if(i==n-1){
        return triangle[n-1][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int down = triangle[i][j]+f(i+1,j,triangle,n,dp);
    int diagonal = triangle[i][j]+f(i+1,j+1,triangle,n,dp);
    
    return dp[i][j] =  min(down,diagonal);
}

int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
    vector<vector<int>> dp(n,vector<int>(n,-1));
    return f(0,0,triangle,n,dp);
    
}

int main(){
    vector<vector<int>> triangle = {{1},
                                    {2, 3},
                                    {4, 5, 6},
                                    {7, 8, 9, 10}};

    cout<<"THE MIN PATH SUM FOR TRIANGLE IS:: "<<minimumPathSum(triangle,4);
    return 0;
}