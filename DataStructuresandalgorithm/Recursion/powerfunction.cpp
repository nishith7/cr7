#include<bits/stdc++.h>
using namespace std;

int powerfun(int N,int a){
    if(N==0){
        return 1;
    }
     return a*powerfun(N-1,a);

}

int main(){
    int N,a;
    cin>>N>>a;
    cout<<powerfun(N,a);
    return 0;
}