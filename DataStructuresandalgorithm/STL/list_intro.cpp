#include<bits/stdc++.h>

using namespace std;

// same as vector but also gives you element from the front
void my_list(){
    list<int> l;

    l.push_back(4);
    l.push_back(3);
    l.push_back(7);
    l.push_back(2);
    l.push_front(1);//allows you to push front unlike vector

    for(auto it:l){
        cout<<it<<endl;
    }

    //vector is internally implemented as singly link list
    //while list implements doubly link list
    
}

int main(){
    my_list();
    return 0;
}

