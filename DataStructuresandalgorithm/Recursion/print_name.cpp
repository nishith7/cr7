#include<bits/stdc++.h>

using namespace std;
// TC:: O(N)  SC:: O(N)
void print(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Nishith"<<endl;
    print(i+1,n);

}

int main(){
    int i=1,n;
    cin>>n;

    print(i,n);
    return 0;
}