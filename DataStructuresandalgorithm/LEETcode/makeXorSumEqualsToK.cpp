#include <vector>
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int res = 0;

        for(int bit=0;bit<20;bit++){
            int xorVal = 0;
            for(auto el:nums){
                int bitVal = (1<<bit) & el;
                xorVal = xorVal ^ bitVal;
            }
            int kbitVal = (1<<bit) & k;

            if(xorVal!=kbitVal) res++;
        }
return res;
        
    }
};