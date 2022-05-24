#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//as always going for brute force

void stockspan(vector <int>&stocks){
    int n=stocks.size();
    stocks[0]=1;
    for(int i=1;i<n;i++){
        int temp=stocks[i];
        for(int j=i-1;i>=1;i--){
            if(stocks[j]>temp){
                stocks[i]=i-j;
            }
        }
    }
    for(int i=0;i<stocks.size();i++){
        cout<<stocks[i]<<", ";
    }
     

}

int main(){
    vector <int>stocks={100,80,60,70,60,75,85};

    stockspan(stocks);
    return 0; 
}