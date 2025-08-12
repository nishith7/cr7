#include<bits/stdc++.h>
#include<vector>
class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        const int mod = 1e9+7;
        vector<int> power;
        vector<int> res;
        for (int bit = 0; bit < 31; bit++) {
    if (n & (1 << bit)) {
        power.push_back(1 << bit);
    }
}
        for(int j=0;j<queries.size();j++){
        long long val = 1;
            while(queries[j][0]<=queries[j][1]){
                val = (val*power[queries[j][0]])%mod;
                queries[j][0]++;
            }
            res.push_back(val);
        }
         return res;        
    }
};