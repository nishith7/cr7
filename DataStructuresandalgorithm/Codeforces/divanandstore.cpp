#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
void solve(){
        int n,l,r,k;
        int count=0;
        cin>>n>>l>>r>>k;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i]>k){
                break;
            }
            if(v[i]>=l && v[i]<=r){
                count++;
                k=k-v[i];
                
                }  
            }
            cout<<count<<endl;
        
    }

int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}