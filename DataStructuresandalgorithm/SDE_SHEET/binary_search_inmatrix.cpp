#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0){
            return false;
        }
        int lo = 0;
        int hi = (matrix.size()*matrix[0].size())-1;
       
        while(lo<=hi){
             int m = matrix[0].size();
             int mid = (lo+(hi-lo)/2);
            if(matrix[mid/m][mid%m]==target){
                return true;
            }
            else if(matrix[mid/m][mid%m]<target){
                lo=mid+1;
            }
            else{
                hi = mid-1;
            }  
        }
        return false;
         
    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 0;
    cin>>target;

    cout<<s.searchMatrix(matrix,target);

    return 0;

}