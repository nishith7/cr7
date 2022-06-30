#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
            
        }
        int q=n/2;
        if(n%2!=0){
            return false;
        }
        if(q==1){
            return true;
        }
         return isPowerOfTwo(n/2);
   
    }
};

int main(){
    Solution s;
    bool ans = s.isPowerOfTwo(1024);
    cout<<ans;

    return 0;
}