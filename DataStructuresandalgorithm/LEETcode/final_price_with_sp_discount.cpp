class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> monotonicStack;
      
        for (int i = prices.size() - 1; i >= 0; --i) {
            int currentPrice = prices[i];
            while (!monotonicStack.empty() && monotonicStack.top() > currentPrice) {
                monotonicStack.pop();
            }
            if (!monotonicStack.empty()) {
                prices[i] -= monotonicStack.top();
            }
            monotonicStack.push(currentPrice);
        }
      
        return prices;
        
    }
};