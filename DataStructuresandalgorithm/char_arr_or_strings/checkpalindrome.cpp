#include<bits/stdc++.h>

using namespace std;

bool check(string str){                     //O(N)
    int l=0;
    int h=str.length()-1;

    while(h>l){                             //comparing from l from start and h from last till they are not matched
        if(str[l++]!=str[h--]){
            return false;
        }
    }
    return true;

}



int main(){
    string str;
    cin>>str;
    cout<<check(str)<<endl;
    
    

    return 0;
}