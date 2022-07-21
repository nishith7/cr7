#include<bits/stdc++.h>

using namespace std;

// we all know LIFO right,

void my_stack(){
    //lets push....
    stack<int> st;

    st.push(0);
    st.push(3);
    st.push(6);
    st.push(2);
    st.push(7);

    cout<<st.top()<<endl;// print 7

    st.pop();// removes 7 -->2 6 3 0 

    //to print
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();


    }
    cout<<st.top();


}

int main(){
    my_stack();
    return 0;
}