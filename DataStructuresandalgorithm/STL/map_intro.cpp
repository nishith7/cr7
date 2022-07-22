#include<bits/stdc++.h>

using namespace std;

//keys are unique  but values arent
void my_map(){
    map<int,int> mp; // map<int,pair<int,int>> mp
    mp[1] = 2;       //{1,2} stored
    mp.insert({6,7});
    mp.insert({8,9});

    //maps stores unique keys in sorted order
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;

    }
    cout<<mp[1]<<endl;
    auto it = mp.find(7);
    //cout<<*it<<endl;
}

int main(){
   my_map();
   return 0; 
}