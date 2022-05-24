#include<bits/stdc++.h>
using namespace std;
bool comp(pair<string,int> &a,pair <string,int> &b){
    return a.second<b.second;
}

void sortFruits(vector<pair<string,int>> v, string S){
    // your code  goes here
    if(S=="name"){
        sort(v.begin(),v.end());
    }else{
        sort(v.begin(),v.end(),comp);
    } 

    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
}

int main(){
    vector <pair<string,int>> v1;
    int arr[]={100,70,40,60,30};
    string arr1[]={"Mango","Guava","Grapes","Apple","Banana"};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<n; i++){
        v1.push_back( make_pair(arr1[i],arr[i]) );
    }
    string S1="price";
    sortFruits(v1,S1);
    
    return 0;
}