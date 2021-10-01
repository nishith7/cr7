#include<bits/stdc++.h>

using namespace std;

int main(){
    char path[1000];
    cin.getline(path,1000);
    int x=0,y=0;
    for(int i=0;path[i]!='\0';i++)
    {
        
    if(path[i]=='N'){
        y++;
    }else if(path[i]=='S'){
        y--;
    }else if(path[i]=='W'){
        x--;
    }else if(path[i]=='E'){
        x++;
        
    }
    }

    cout<<"X::"<<x<<" "<<"Y::"<<y<<endl;
    if(x>0 && y>0){
        while(y--){
            cout<<"N";
        }
        while(x--){
            cout<<"E";
        }
    }
    else if(x<0 && y>0){
        while(y--){
            cout<<"N";
        }
        while(x!=0){
            cout<<"W";
            x++;
        }
    }
    else if(x<0 && y<0){
        while(y!=0){
            cout<<"S";
            y++;
        }
        while(x!=0){
            cout<<"W";
            x++;
        }
    }
    else if(x>0 && y<0){
        while(y!=0){
            cout<<"S";
            y++;
        }
        while(x--){
            cout<<"E";
        }
    }
    

return 0;
    
}