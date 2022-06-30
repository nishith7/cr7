#include<bits/stdc++.h>

using namespace std;

//Bottom up aprroach
int makeChange(vector<int>coins,int N){
    vector<int>dp(N+1,0);
    dp[0]=0;
    for(int i=1;i<=N;i++){
        dp[i] = INT_MAX;

        for(int c:coins){
            if(i-c>=0 && dp[i-c]!=INT_MAX){
                dp[i] = min(dp[i],dp[i-c]+1);
            }
        }
    }

    return dp[N]==INT_MAX?-1:dp[N];

}

int main(){
    vector<int> coins = {1,5,7,10};
    int N;
    cin>>N;
    cout<<"MIN. NO. OF COINS::"<<makeChange(coins,N);
}