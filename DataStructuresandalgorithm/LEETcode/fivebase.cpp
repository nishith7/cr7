#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--){
        long long int num;
        cin>>num;
        vector<int>v;
        while(num!=0){
            int r=num%2;
            num/=2;
            v.push_back(r);
        }
        int n=v.size()-1;
         for(int i=n;i>=0;i--){
             if(v[i]==1){
                v[i]=5;
            }
        }
        
        for(int i=n;i>=0;i--){
            cout<<v[i];
        }
        cout<<endl;
    }
    return 0;
}