#include<bits/stdc++.h>

using namespace std;


int f(int i,int j1,int j2,int r,int c,vector<vector<int>> &grid,vector<vector<vector<int>>> &dp){
    if(j1<0 || j1>=c || j2<0 || j2>=c){
        return -1e8;
    }
    if(i==r-1){
        if(j1==j2) return grid[i][j1];
        else return grid[i][j2]+grid[i][j1];
    }
    if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
    int maxi = -1e8;
    for(int dj1 = -1;dj1<2;dj1++){
        for(int dj2 = -1;dj2<2;dj2++){
            int value = 0;
            if(j1==j2) value = grid[i][j1];
            else value = grid[i][j1]+grid[i][j2];
            value+=f(i+1,j1+dj1,j2+dj2,r,c,grid,dp);
            maxi = max(maxi,value);
        }
    }
    return dp[i][j1][j2]= maxi;
    
}
int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    // Write your code here.
    //int dp[r][c][c]
    vector<vector<vector<int>>> dp(r,vector<vector<int>>(c,vector<int>(c,-1)));
    return f(0,0,c-1,r,c,grid,dp);
    
}

int main(){
    vector<vector<int>> grid={{2, 3, 1, 2},
                              {3, 4,2, 2},
                              {5, 6, 3, 5}};
    int r = 3,c = 4;

    cout<<"the MAX number of chocolates are:: "<<maximumChocolates(r,c,grid);

    return 0;

}