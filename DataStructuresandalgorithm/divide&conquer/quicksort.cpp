#include<bits/stdc++.h>

using namespace std;

int partition(vector <int>&vec,int s,int e){
    int i=s-1;
    int pivot = vec[e];
    for(int j=s;j<e;j++){
        if(vec[j]<pivot){
            i++;
            swap(vec[i],vec[j]);
        }
    }
    swap(vec[i+1],vec[e]);
    return i+1;
}

void quick_sort(vector <int>&vec,int s,int e){
    if(s>=e){
        return;
    }

    int p = partition(vec,s,e);
    quick_sort(vec,s,p-1);
    quick_sort(vec,p+1,e);
}


int main(){
    vector <int> v = {10,5,2,0,7,6,4};
    int n = v.size();
    quick_sort(v,0,n-1);
    for(int i:v){
        cout<<i<<" ";
    }

    return 0;


}