
#include<bits/stdc++.h>

using namespace std;

//set means no duplicates and sorted

void my_set(){
    set<int> s;
    s.insert(3); //3
    s.insert(7); //3 7
    s.insert(0); // 0 3 7 
    s.insert(8); // 0 3 7 8
    s.insert(1); // 0 1 3 7 8
    s.insert(0);

    auto it = s.find(7); //gives an iterator
    cout<<*it<<endl; 
    auto it2 = s.find(6); //gives s.end() iterator points after the end
    cout<<*it2<<endl;
    s.erase(3); //erases 3 takes log time 

    int c = s.count(8);
    cout<<c<<endl;
     
     //everything happens in log time
     for(auto it:s){
        cout<<it<<" ";
     }



}

int main(){
    my_set();
    return 0;

}