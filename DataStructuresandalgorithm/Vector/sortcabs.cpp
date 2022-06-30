#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool comp(pair<int,int> a,const pair<int,int> b){
        float x = sqrt((a.first*a.first) + (a.second*a.second));
    float y = sqrt((b.first*b.first) + (b.second*b.second));
    return x < y;
    
}

vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
    // your code  goes here
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<v.size();i++){
           cout<<v[i].first<<" "<<v[i].second<<endl;
       }
    
    return v;
}

int main(){
    vector< pair <int,int> > vect;
    int arr[] = {2, 1, 3, 2, 1 };
    int arr1[] = {3,2,4,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    // Entering values in vector of pairs
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(arr[i],arr1[i]));

     sortCabs(vect);

       

    
  
    return 0;
}