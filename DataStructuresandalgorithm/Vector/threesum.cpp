#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void threeSum(vector<int>& nums) {
        vector <int> ans;
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=i+2;k<nums.size();k++){
                    if(i!=j && j!=k && i!=k && nums[i]+nums[j]+nums[k]==0){
                       vector <int> ans = {nums[i],nums[j],nums[k]};

    
                    }
                }
            }
        }
        
        
    }
};

int main(){
    vector <int> v={-1,0,1,2,-1,-4};
    Solution s;
    s.threeSum(v);
    

}