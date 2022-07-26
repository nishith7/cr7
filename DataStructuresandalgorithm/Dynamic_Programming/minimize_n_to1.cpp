#include<bits/stdc++.h>

using namespace std;

int f(int N){
    if(N==1){
        return 0;
    }
    int result = f(N-1);
    if(N%2==0){
        result = min(result,f(N/2));
    }
    else if(N%3==0){
        result = min(result,f(N/3));
    }

    return result+1;

}

int myfun(int N){
    return f(N);
}

int main(){
    int N;
    cin>>N;
    cout<<"THE MIN STEPS ARE :: "<<myfun(N);

    return 0;
}