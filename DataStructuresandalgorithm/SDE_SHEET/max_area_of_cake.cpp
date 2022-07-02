#include<bits/stdc++.h>

using namespace std;

int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        int max_w = 0;
        
        for(int i=0;i<horizontalCuts.size();i++){
            max_w = max(max_w,horizontalCuts[i]-horizontalCuts[i+1]);
        }
        int max_h = 0;
        for(int i=0;i<verticalCuts.size();i++){
            max_h = max(max_h,verticalCuts[i]-verticalCuts[i+1]);
        }
        
        return (long)max_h * max_w % 1000000007;
        
    }