#include<bits/stdc++.h>

using namespace std;

vector<int> bhainimethod(vector<int> &nums,int target){
      vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++)
            v.push_back({nums[i],i});
        sort(v.begin(),v.end());
        int i=0;
        int j=v.size()-1;
        int idx1=0;
        int idx2=0;
        while(i<j)
        {
            if(v[i].first+v[j].first==target)
            {
                idx1=v[i].second;
                idx2=v[j].second;
                break;
                
            }
            if(v[i].first+v[j].first<target)
                i++;
            if(v[i].first+v[j].first>target)
                j--;
    }
        return {idx1,idx2};

}

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
     vector<int> nums(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
   vector<int>ans = bhainimethod(nums,target);
    for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
    }

    return 0;
}