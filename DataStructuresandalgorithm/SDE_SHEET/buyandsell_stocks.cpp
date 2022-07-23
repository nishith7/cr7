#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = INT_MAX;
        int profit = 0;
        for(int i=0;i<prices.size();i++){
            minimum = min(minimum,prices[i]);
        profit = max(profit,prices[i]-minimum);
            
        }
        return profit;
        
    }
};

int main(){
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    int ans = s.maxProfit(prices);
    cout<<"THE MAX PROFIT IS:: "<<ans;
    return 0;
}