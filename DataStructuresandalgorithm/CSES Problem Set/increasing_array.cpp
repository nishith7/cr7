#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        int num=0;
        cin>>num;
        v.push_back(num);
    }
    ll min_moves = 0;
    for(ll i=1;i<n;i++){
        if(v[i]<v[i-1]){
            while(v[i]!=v[i-1]){
                v[i]++;
                min_moves++;
            }
        }
    }
    cout<<min_moves;
    return 0;
}