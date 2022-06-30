#include<bits/stdc++.h>

using namespace std;
 //knapsack with recursive approach using memoization
int knapsack(int val[],int wt[],int capacity,int n){
    vector<vector<int>> dp;
    for(int i=0;i<n;i++){
        for(int j=0;j<capacity+1;j++){
            dp[i][j]=-1;
        }
    }
    if(n==0 || capacity==0){
        return 0;
    }
    if(dp[n][capacity]!=-1){
        return dp[n][capacity];
    }

    if(wt[n-1]<=capacity){
         dp[n][capacity]=max(val[n-1] + knapsack(val,wt,capacity-wt[n-1],n-1),knapsack(val,wt,capacity,n-1));
         return dp[n][capacity];
    }

    else if(wt[n-1]>capacity){
         dp[n][capacity] = knapsack(val,wt,capacity,n-1);
         return dp[n][capacity];
    }
    return dp[n][capacity];
}

int main(){
    int val[]={60,100,120};
    int wt[]={10,20,30};

    int capacity = 50;
    int n=3;

    cout<<"MAX PROFIT IS::"<<knapsack(val,wt,capacity,n);
    return 0;

}