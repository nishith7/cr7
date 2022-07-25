#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int> ans(2, -1);
        int start = 0, end = (int)nums.size() - 1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(nums[mid] < target) start = mid+1;
            else {
                if(nums[mid] == target) ans[0] = mid;
                end = mid-1;
            }
        }
        start = 0, end = (int)nums.size() - 1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(nums[mid] > target) end = mid-1;
            else {
                if(nums[mid] == target) ans[1] = mid;
                start = mid+1;
            }
        }
        return ans;
        
    }
};

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    Solution s;
    vector<int> v = s.searchRange(nums,target);
    cout<<v[0]<<" "<<v[1]<<endl;

    return 0;

}