#include<iostream>

using namespace std;

void selection_sort(int a[],int n){
    for(int pos=0;pos<=n-2;pos++){
        int current=a[pos];
        int min_position=pos;
        for(int j=pos;j<=n;j++){
            if(a[j]<a[min_position]){
                min_position=j;
            }
        }
        swap(a[min_position],a[pos]);
    }

}

int main(){
    int a[]={-2,3,4,4,-1,5,-12,6,1,3};
    int n=sizeof(a)/sizeof(int);
    selection_sort(a,n);
    for(auto x:a){
        cout<<x<<", ";
    }
    return 0;
}

