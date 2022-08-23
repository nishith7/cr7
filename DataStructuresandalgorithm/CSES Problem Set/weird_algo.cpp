#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    if(n!=1){
    cout<<n<<" ";
    }
    vector<long long int> temp;
    if(n==1){
        cout<<1<<" ";
    }
    while(n!=1){
        if(n%2==0){
            n=n/2;
            temp.push_back(n);
        }

       else if(n%2!=0){
            n=(n*3)+1;
            temp.push_back(n);
        }
    }
    
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}