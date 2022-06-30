#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        for(int i=0;i<s.length();i++){
            int l=i,r=i;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                count+=1;
                l -= 1;
                r += 1;
            }
            l=i;
            r=i+1;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                count+=1;
                l -= 1;
                r += 1;
            }
        }
        return count;
        
    }
};

int main(){
        string s;
        cin>>s;
        Solution s1;
        cout<<s1.countSubstrings(s);

        return 0;
    }