#include<bits/stdc++.h>

using namespace std;

void my_deque(){
    deque<int>dq;
    dq.push_back(9);//9
    dq.emplace_back(0);// 9 0

    dq.push_front(7);// 7 9 0

    dq.emplace_front(5); //5 7 9 0

    dq.pop_back(); // 5 7 9
    dq.pop_front();// 7 9 

   cout<< dq.back()<<endl; //9
    cout<<dq.front();//7

}

int main(){
    my_deque();
    return 0;
}