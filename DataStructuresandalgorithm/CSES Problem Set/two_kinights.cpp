#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    int i=1;
    cout<<0<<endl;
    for(ll j=2;j<=n;j++){
        ll total = (j*j*((j*j)-1)/2);
        ll combi = 2*2*(j-2)*(j-1);
        cout<<total-combi<<endl;
    }
        
    return 0;
}