#include<bits/stdc++.h>

using namespace std;

 int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        int prev2=1;
        int prev = 2;
        for(int i=3;i<=n;i++){
            int curri = prev2+prev;
            prev2=prev;
            prev=curri;
        }
        return prev;
        
    }

int main(){
    int n;
    cin>>n;
    cout<<"TOTAL NO. OF WAYS:: "<<climbStairs(n);

    return 0;
}