#include<bits/stdc++.h>

using namespace std;

bool check_palindrome(string str,int i,int j){
    if(i>=str.length()/2){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    
    return check_palindrome(str,i+1,j-1);

}

int main(){
    string str = "abacdba";
    int i=0,j=str.length()-1;
    bool ans = check_palindrome(str,i,j);
    if(ans){
        cout<<"PALINDROME";
    }else{
        cout<<"NOT PALINDROME";
    }
    return 0;
}