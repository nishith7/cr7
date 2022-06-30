#include<bits/stdc++.h>

using namespace std;

int BtoD(string s){
    int n = stoi(s);
    vector<int>v;
    for(int i=0;i<s.length();i++){
        int num=n%10;
        v.push_back(num);
        n=n/10;
    }
    int ans=0;
    for(int i=v.size();i>=0;i--){
        if(v[i]==1){
            ans+=pow(2,i);
        }
    }

    return ans;


}

int main(){
    string s;
    cin>>s;
    cout<<BtoD(s);

    return 0;

}