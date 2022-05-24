#include<bits/stdc++.h>

using namespace std;

void merge(vector<int>&vec,int s,int e){
    int i=s;
    int m=(s+e)/2;
    int j=m+1;

    vector <int> temp;

    while(i<=m && j<=e){
        if(vec[i]<vec[j]){
            temp.push_back(vec[i]);
            i++;
        }
        else{
            temp.push_back(vec[j]);
            j++;        }
    }

    //for the remianing elements
    while(i<=m){
        temp.push_back(vec[i++]);
    }

    while(j<=e){
        temp.push_back(vec[j++]);
    }
    int k=0;
    for(int i=s;i<=e;i++){
        vec[i]=temp[k++];
    }

    return;

}

void mergesort(vector<int>&vec,int s,int e){
    //basecase
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergesort(vec,s,mid);
    mergesort(vec,mid+1,e);
    return merge(vec,s,e);

}

int main(){
    vector <int>v={10,5,2,0,7,6,4};
    int s=0;
    int e=v.size()-1;
    mergesort(v,s,e);
    for(int i:v){
        cout<<i<<" ";
    }


    return 0;

}