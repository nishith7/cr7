#include <bits/stdc++.h>

using namespace std;

int main(){
    char a[] = {'N','I','S','H','I','T','H','\0'};//always end char array with null character while initializing
    //or
     char b[]="RONALDO";                           //no null character needed
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<strlen(b)<<endl;                        //no of chars
    cout<<sizeof(b)<<endl;                         //n+1 die to null character
   // char c[100];
    //cin>>c;                               //read string without spaces
   // cout<<c<<endl;

    //reading all kind of chars including spaces
   /* char sec[1000];
    char temp = cin.get();
    int len=1;
    while(temp!='\n'){
        cout<<temp;
        temp=cin.get();
        len++;
    }*/
    /*char sen[1000];
    int len = 0;
    int temp = cin.get();
    while(temp!='#'){
        sen[len++] = temp;
        temp = cin.get();

    }
    cout<<sen<<endl;
    cout<<len;*/

    //using cin.getline()

    char s[1000];
    cin.getline(s,1000);
    cout<<s<<endl;

    
    
                           
    return 0;
}