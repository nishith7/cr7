#include<bits/stdc++.h>

using namespace std;

int noGridWays(int i,int j,int m,int n){
    //target bottom left
    //base case
    if(i==m-1 && j==n-1){
        return 1;
    }
    //corner case
    if(i>=m || j>=n){
        return 0;
    }

    int ans = noGridWays(i+1,j,m,n)+noGridWays(i,j+1,m,n);

    return ans;

}

int main(){
    int m,n;
    cin>>m>>n;
    cout<<noGridWays(0,0,m,n);

    return 0;

}

