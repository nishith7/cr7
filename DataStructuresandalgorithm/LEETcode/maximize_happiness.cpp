class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<>());

        long long maxSum = 0;

        for(long long i = 0;i<happiness.size();i++){
            
            cout<<happiness[i]-i<<" "<<k<<" ";
            if(k>0 && (happiness[i] - i >= 0)){
                
            maxSum+=happiness[i]-i;
                k--;
                
            }

        }

        return maxSum;
        
    }
};