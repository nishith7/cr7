#include<iostream>
#include"myqueue.h"

using namespace std;

int main(){
    Queue q(7);
    q.push(2);
    q.push(9);
    q.push(8);
    q.push(1);
    q.push(4);
    q.push(6);
    q.push(0);
    q.push(4);
    q.pop();
    q.pop();
    q.push(100);
    while(!q.empty()){
        cout<<q.get_front()<<endl;
        q.pop();
    }






    return 0;

}