#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//read each string and print the largest string
int main(){
    int n;
    cin>>n;
    cin.get();

    int l=0;
    char string[1000];
    char largest[1000];
    for(int i=0;i<n;i++){
        cin.getline(string,1000);
        int len=strlen(string);
        if(len>l){
            l=len;
            strcpy(largest,string);
        }
        
    }
cout<<largest<<" ,"<<l<<endl;
return 0;
}