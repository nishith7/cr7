#include<bits/stdc++.h>

using namespace std;

int sumofn(int n,int sum){
    if(n<1){
        cout<<sum;
        return sum;
    }
    sumofn(n-1,sum+n);

}
int main(){
    int n,sum=0;
    cin>>n;
    sumofn(n,sum);
    return 0;
}