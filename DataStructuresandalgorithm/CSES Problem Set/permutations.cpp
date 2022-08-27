#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<int> findPermutations(int n){
    vector<int>ans;
    if(n%2==0){
        for(int i=2;i<=n;i+=2){
            ans.push_back(i);
        }
        for(int i=1;i<n;i+=2){
            ans.push_back(i);
        }
    }
    else{
        for (int i = 2; i <= n - 1; i += 2) {
            ans.push_back(i);
        }
        for (int j = 1; j <= n; j += 2) {
            ans.push_back(j);
        }
        }
   return ans; 

}

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    if(n==2 || n==3){
        cout<<"NO SOLUTION";
        return 0;
    }

    vector<int>temp = findPermutations(n);
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }

    return 0;
    
}