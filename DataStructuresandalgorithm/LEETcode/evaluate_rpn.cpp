#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        set<char> ops = {'+', '-', '*', '/'};
        stack<int> st;

        for (auto &t : tokens) {

            if (t.size() == 1 && ops.contains(t[0])) {
                int op1 = st.top(); st.pop();
                int op2 = st.top(); st.pop();

                if (t[0] == '+') st.push(op2 + op1);
                else if (t[0] == '-') st.push(op2 - op1);
                else if (t[0] == '*') st.push(op2 * op1);
                else if (t[0] == '/') st.push(op2 / op1);
            } 
            else {
                st.push(stoi(t));
            }
        }
        return st.top();
        
    }
};