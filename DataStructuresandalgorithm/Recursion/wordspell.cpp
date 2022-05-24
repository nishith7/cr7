#include<bits/stdc++.h>

using namespace std;

string words[]={"zero","one","two","three","four","five","six","seven","eight","nine"};


void converttoword(int N){
    
    if(N==0){
        return;
    }
    int lastd = N%10;
    converttoword(N/10);
    cout<<words[lastd]<<" ";

}

int main(){
    int N;
    cin>>N;
    converttoword(N);
    return 0;
}