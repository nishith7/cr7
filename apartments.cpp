#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll applicants,apartments,diff;
    cin>>applicants>>apartments>>diff;
    ll sizes[applicants];
    ll apts[apartments];
    for(ll i=0;i<applicants;i++){
        cin>>sizes[i];
    }
    for(ll j=0;j<apartments;j++){
        cin>>apts[j];
    }
    sort(sizes,sizes+applicants);
    sort(apts,apts+apartments);
    ll cnt = 0,i=0,j=0;
    while(i<applicants && j<apartments){
        if(abs(sizes[i]-apts[j])<=diff){
            cnt++;i++;j++;
        }
        else if(sizes[i]>apts[j]){
            j++;
        }
        else{
            i++;
        }
    }
    cout<<cnt;
    
return 0;
}