#include<bits/stdc++.h>

using namespace std;

int optpowerfun(int a,int N){
    if(N==0){
        return 1;
    }
    int subp=optpowerfun(a,N/2);
    int subsq = subp*subp;
    if(N&1){
        return a*subsq;
    }
    return subsq;
}

int main(){
    int a,N;
    cin>>a>>N;
    cout<<optpowerfun(a,N);
    return 0;
}