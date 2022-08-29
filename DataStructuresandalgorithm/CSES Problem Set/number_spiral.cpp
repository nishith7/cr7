#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll t,r,c;
    cin>>t;
    while(t--){
    cin>>r>>c;
    if(r==c){
        cout<<r*r-(r-1)<<endl;
    }
    else{
        ll val = max(r,c);
        val = val*val-(val-1);
        if(c>r){
            if(c%2==0){
                val-=(c-r);
            }else{
                val+=(c-r);
            }
        }
        else if(r>c){
            if(r%2==0){
                val+=(r-c);
            }else{
                val-=(r-c);
            }
        }
        cout<<val<<endl;
    }
    }
    return 0;
}