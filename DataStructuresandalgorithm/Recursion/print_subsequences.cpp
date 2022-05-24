#include<bits/stdc++.h>

using namespace std;

void print_subsequence(int i,vector<int> &ds,int arr[],int n){
    if(i==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return ;
    }
    //take or pick the particular index
    ds.push_back(arr[i]);
    print_subsequence(i+1,ds,arr,n);
    ds.pop_back(); 

    //not pick
    print_subsequence(i+1,ds,arr,n);
}

int main(){
    int arr[] = {3,1,2};
    int n=3;
    vector<int>ds;
    print_subsequence(0,ds,arr,n);
    return 0;
}