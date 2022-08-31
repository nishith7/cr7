#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        if(s.size()==0){
            return s;
        }
        stack<string>stack;
        for(int i=0;i<s.size();i++){
            string word = "";
            if(s[i]==' '){
                continue;
            }
            while(s[i]!=' ' && i<s.size()){
                word+=s[i];
                i++;
            }
            stack.push(word);
        }
        string res;
        while(!stack.empty()){
            res+=stack.top();
            stack.pop();
            if(!stack.empty())res+=" ";
        }
        return res;
        
    }
};