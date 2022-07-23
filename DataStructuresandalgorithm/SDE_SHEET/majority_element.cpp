#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;
        
        for(int num:nums){
            if(count==0){
                candidate = num;
            }
            if(num==candidate){
                count+=1;
            }else{
                count-=1;
            }
        }
        return candidate;        
    }
};

int main(){
    Solution s;
    vector<int> nums = {2,2,1,1,1,2,2};
    cout<<"THE MAJORITY ELEMENT IS:: "<<s.majorityElement(nums);

    return 0;
}