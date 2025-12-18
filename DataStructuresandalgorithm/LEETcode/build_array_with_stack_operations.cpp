#include<vector>
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        map<int,int> mp;
        for(int num:target){
            mp[num]++;
        }
        for(int i=0;i<n;i++){
            if(target.size()==0){
                break;
            }
            if(mp.find(i+1) != mp.end()){
                res.push_back("Push");
                target.erase(target.begin() + i);
            }else{
                res.push_back("Push");
                res.push_back("Pop");
            }

        }
        return res;
        
    }
};