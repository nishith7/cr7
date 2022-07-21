#include<bits/stdc++.h>
using namespace std;
int solve(int ind,vector<int> &num,int x){
    if(ind==0){
        if(x%num[0]==0) return x/num[0];
        return 1e9;
    }
    int not_take = 0+solve(ind-1,num,x);
    int take = INT_MAX;
    if(num[ind]<=x){
        take = 1+solve(ind,num,x-num[ind]);
    }
    return min(take,not_take);
    
}
int minimumElements(vector<int> &num, int x)
{
    int n = num.size();
    int ans = solve(n-1,num,x);
    if(ans>=1e9) return -1;
    return ans;
    // Write your code here.
}

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int> num;
    for(int i=0;i<n;i++){
        int t=0;
        cin>>t;
        num.push_back(t);
    }
    cout<<"THE min number of coins are:: "<<minimumElements(num,x);

    return 0;
}