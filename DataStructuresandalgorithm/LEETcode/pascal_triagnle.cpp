#include<bits/stdc++.h>
#include<vector>
using namespace std;




void printPascal(int n)
{
    // your code goes here
    
    cout<<1<<endl;
    
    for(int i=1;i<n;i++){
        cout<<pow(11,i)<<endl;
    }
    
}



int main(){
    int n;
    cin>>n;
    printPascal(n);
    
    return 0;

}