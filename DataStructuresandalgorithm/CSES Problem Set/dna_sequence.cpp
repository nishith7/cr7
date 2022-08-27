#include<bits/stdc++.h>

using namespace std;

int countChar(string str){
    int temp=1,ans = 1;
    for(int i=1;i<str.size();i++){
        if(str[i]==str[i-1]){
            temp++;
        }
        else{
            
            ans=max(ans,temp);
            temp=1;
        }
    }
    ans = max(temp,ans);
    return ans;

}

int main(){
    string str;
    cin>>str;
    cout<<countChar(str);

    return 0;
}