
#include<bits/stdc++.h>

using namespace std;
void pr_queue(){
    priority_queue<int> pq; //max element stays at the top

    pq.push(3); //3
    pq.push(1); //3, 1
    pq.push(7); //7,3,1
    pq.push(90); //90,7,3,1
     
    pq.push(7809); //7809,90,7,3,1
    
    pq.pop(); //removes 7809--> 90,7,3,1
    cout<<pq.top()<<endl; //prints 90->largest element

    //size, swap, empty function same as others

    //less go for minimum heap
    priority_queue<int,vector<int>,greater<int>> pq_min;

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();

    }
}

int main(){
    pr_queue();
    return 0;
}

// TC's push-->log(n)  top-->O(1)  pop-->log(n) 

