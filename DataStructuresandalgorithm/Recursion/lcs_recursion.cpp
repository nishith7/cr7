#include<bits/stdc++.h>

using namespace std;

int f(int indone,int indtwo,string &a,string &b){
    if(indone < 0 || indtwo<0){
        return 0;
    }
    if(a[indone]==b[indtwo]){
        return 1+f(indone-1,indtwo-1,a,b);
    }
    return 0+max(f(indone-1,indtwo,a,b),f(indone,indtwo-1,a,b));

}

int lcs(string &a,string &b){
    int indone = a.size()-1;
    int indtwo = b.size()-1;

    return f(indone,indtwo,a,b);

}

int main(){
    string a="";
    string b = "";
    cin>>a;
    cin>>b;
    cout<<"THE LENGTH OF LCS IS:: "<<lcs(a,b);

    return 0;
}