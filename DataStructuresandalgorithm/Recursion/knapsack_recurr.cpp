#include<bits/stdc++.h>

using namespace std;
int solve(int ind,vector<int> weight, vector<int> value, int n, int maxWeight){
    if(ind==0) if(weight[0]<=maxWeight) return value[0];
    else return 0;
    
    int not_steal = 0+solve(ind-1,weight,value,n,maxWeight);
    int steal = INT_MIN;
    if(weight[ind]<=maxWeight){
        steal = value[ind] + solve(ind-1,weight,value,n,maxWeight-weight[ind]);
    }
    return max(steal,not_steal);
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
    return solve(n-1,weight,value,n,maxWeight);
}

int main(){
    vector<int> weight;
    vector<int> value;
    int n;
    cin>>n;
    int maxWeight;
    cin>>maxWeight;
    for(int i=0;i<n;i++){
        int t=0;
        cin>>t;
        weight.push_back(t);
    }
    for(int i=0;i<n;i++){
        int t=0;
        cin>>t;
        value.push_back(t);
    }
    cout<<"the max amount is:: "<<knapsack(weight,value,n,maxWeight);

    return 0;
}