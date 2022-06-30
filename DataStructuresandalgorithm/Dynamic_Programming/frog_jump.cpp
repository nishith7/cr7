#include<bits/stdc++.h>

 
using namespace std;

int frogJump(int n, vector<int> &cost)
{
    // Write your code here.
    int prev = 0,prev2 = 0;
    for(int i=1;i<n;i++){
        int fs = prev + abs(cost[i]-cost[i-1]);
        int sc = INT_MAX;
        if(i>1){
        sc = prev2 + abs(cost[i]-cost[i-2]);
        }
        int curri = min(fs,sc);
        prev2 = prev;
        prev=curri;
        
    }
        return prev;
}

int main(){
    int n;
    cin>>n;
    vector<int> cost;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cost.push_back(x);
    }
    cout<<"THE MAX COST IS:: "<<frogJump(n,cost);
    return 0;
}