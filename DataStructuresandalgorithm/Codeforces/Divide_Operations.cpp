#include<bits/stdc++.h>
#define LL long long

const LL MOD = 1e9 + 7;
const int MX = 1e5 + 23;
using namespace std;


void solve(){
         LL n;
        cin>>n;
        vector<LL> v(MX);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
    bool flag = true;
        for(int i=1;i<=n;i++){
            if(v[i]%v[1]){
                flag = false;
                break;
            }
            
        }
        if(flag==false){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}