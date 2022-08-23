#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n;
    cin>>n;
    vector<ll>temp;
    ll sum = 0;
    for(ll i=0;i<n-1;i++){
        ll trash = 0;
        cin>>trash;
        temp.push_back(trash);
        sum+=temp[i];
    }
    ll total = (n*(n+1))/2;
    cout<<total-sum;

    return 0;

}