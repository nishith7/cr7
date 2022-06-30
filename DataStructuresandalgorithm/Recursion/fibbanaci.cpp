#include<bits/stdc++.h>
using namespace std;

int fibonacci(int N){
    if(N==0 || N==1){
        return N;
    }
    int ans = fibonacci(N-1)+fibonacci(N-2);

    return ans;

}


int main(){
    int N;
    cin>>N;
    cout<<fibonacci(N);
    return 0;
}