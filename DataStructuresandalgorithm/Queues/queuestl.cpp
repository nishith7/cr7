#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue <int> q;
    q.push(1);
    q.push(9);
    q.push(4);
    q.push(7);
    q.push(45);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}