#include<bits/stdc++.h>

using namespace std;
//no particular order so better complexity than set

//lower_bound and upper_bound doesnt work

void my_unordered_set(){
    unordered_set<int> ust;
    ust.insert(9);
    ust.insert(0);
    ust.insert(4);
    ust.insert(2);

    for(auto it:ust){
        cout<<it<<" ";

    }

//all operations are O(1) cool right...

}

int main(){
    my_unordered_set();
    return 0;

}