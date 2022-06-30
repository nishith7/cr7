#include<iostream> 

using namespace std;

int main(){
    int x;
    cin>>x;
    if(x&1){                 //anding with 1 to check last bit
        cout<<"ODD";
    }else{
        cout<<"EVEN";
    }
    return 0;
}