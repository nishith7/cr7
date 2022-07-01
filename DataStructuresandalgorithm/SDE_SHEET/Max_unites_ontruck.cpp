#include<bits/stdc++.h>

using namespace std;

 static bool cmp(vector<int> &a,vector<int> &b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
      
            sort(boxTypes.begin(),boxTypes.end(),cmp);
        int ans = 0;
        
        for(auto box: boxTypes){
            int x = min(box[0],truckSize);
                
                    ans+=x*box[1];
            truckSize-=x;
            
        }
        return ans;    
    }

int main(){
    vector<vector<int>> boxTypes={{5,10},{2,5},{4,7},{3,9}};
    int truckSize = 10;
    cout<<"THE MAX UNITS OF BOXES IN TRUCK ARE:: "<<maximumUnits(boxTypes,truckSize);

    return 0;
    
}