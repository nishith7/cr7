
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,2,11,5,6,8,9};
    int n= sizeof(a)/sizeof(a[0]);
    int key = 5;

    int index,count=0;

    for(int i=0;i<n;i++){
        if(a[i]==key){
            break;
        }
        else{
            count++;
        }

    }
    index=count;
    cout<<"index found at::"<<index;
    return 0;

}