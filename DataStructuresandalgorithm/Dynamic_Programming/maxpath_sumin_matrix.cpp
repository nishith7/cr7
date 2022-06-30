#include<bits/stdc++.h>

using namespace std;

int f(int i,int j,vector<vector<int>> &matrix,vector<vector<int>> &dp){
    if(j<0 || j>=matrix[0].size()) return -1e8;
    if(i==0){
        return matrix[0][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

        int down = matrix[i][j] + f(i-1,j,matrix,dp);
        int left_d = matrix[i][j] + f(i-1,j-1,matrix,dp);
        int right_d = matrix[i][j] + f(i-1,j+1,matrix,dp);
        return dp[i][j] = max(down,max(left_d,right_d));
}
int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
    
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dp(n,vector<int>(m,-1));
    int maxi = -1e8;
    
    for(int j=0;j<m;j++){
        maxi = max(maxi,f(n-1,j,matrix,dp));
    }
    return maxi;

}

int main(){
    vector<vector<int>> matrix = {{1, 2, 10, 4},
                                  {100, 3, 2, 1},
                                  {1, 1, 20, 2},
                                  {1, 2, 2, 1}};

    cout<<"THE MAX SUM IS :: "<<getMaxPathSum(matrix);

    return 0;
}