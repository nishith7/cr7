#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){
    ll n;
    vector<ll>v;
    cin>>n;
    set<ll>my_set;
    for(ll i=0;i<n;i++){
        ll temp = 0;
        cin>>temp;
        v.push_back(temp);
        my_set.insert(v[i]);

    }
    int count = 0;
    for(auto it:my_set){
        count++;
    }
    cout<<count;
    return 0;
}