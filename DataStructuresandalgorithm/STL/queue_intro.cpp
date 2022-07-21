#include<bits/stdc++.h>

using namespace std;

//FIFO

void my_queue(){
    queue<int> q;
    q.push(3); //3
    q.push(9); // 3 9 

    q.push(7); //3 9 7

    q.back()+=5;
    cout<<q.back()<<endl; //prints 12

    cout<<q.front()<<endl; //3
    q.pop();// 9 12

}

int main(){
    my_queue();
    return 0;

}