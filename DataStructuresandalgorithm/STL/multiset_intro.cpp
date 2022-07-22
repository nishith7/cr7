#include<bits/stdc++.h>

using namespace std;


//remember: sorted but duplicates allowed

void my_multiset(){
    multiset<int> mlst;

    mlst.insert(9);
    mlst.insert(9);
    mlst.insert(9);
    mlst.insert(9); //9 9 9 9
    
    int cnt = mlst.count(9);
    cout<<cnt<<endl;
    mlst.erase(mlst.find(9));

    for(auto it:mlst){
        cout<<it<<" ";
    }


}

int main(){
    my_multiset();
    return 0;

}