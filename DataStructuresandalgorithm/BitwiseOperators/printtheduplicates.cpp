#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:

vector <int> duplicates(int arr[],int n){
    vector <int> ans;
    ans.push_back(-1);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                int temp=arr[i];
                ans.push_back(temp);
            }
        }

    }
    return ans;

}
};

int main(){
    int arr1[]={2,3,1,2,3};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    Solution s;
   vector <int> ans=s.duplicates(arr1,n);
   for(int i:ans){
       cout<<ans[i]<<" ";
   }
   return 0;

}