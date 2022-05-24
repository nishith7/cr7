#include<bits/stdc++.h>

using namespace std;

void makezeros(vector<vector<int>>& v){
    int r=0;
    int c=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(v[i][j]==0){
                r=i;
                c=j;
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==r || j==c){
                v[i][j]=0;
            }
        }
    }

}


int main(){
    vector<vector<int>> v={{1,2,3},
                            {4,0,6},
                            {7,8,9}};
    
    makezeros(v);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

