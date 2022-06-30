#include<bits/stdc++.h>

using namespace std;

bool canPlace(int arr[][20],int n,int x,int y){
    //column
    for(int k=0;k<x;k++){
        if(arr[k][y]==1){
            return false;
        }
    }

    //left diagonal
    int i = x;
    int j = y;
    while(i>=0 && j>=0){
        if(arr[i][j]==1){
            return false;
        }
        i--;
        j--;
    }

    //right daigonal
    while(i>=0 && j<n){
        if(arr[i][j]==1){
            return false;
        }
        i--;
        j++;
    }
    return true;
}

void printboard(int n,int arr[][20]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int ways = 0;
int Nqueens(int n,int arr[][20],int i){
    //base case
    if(i==n){
    
        return 1;
    }

    //recursive case
    //try to place queen in every row
    for(int j=0;j<n;j++){
        //whether cuurent i,j is safe or not
        if(canPlace(arr,n,i,j)){
            arr[i][j]=1;
            ways+=Nqueens(n,arr,i+1);
            //backtracking
            arr[i][j]=0;
        }
    }
    return ways;
}

int main(){
    int arr[20][20] = {0};
    int n;
    cin>>n;
   cout<<"NO OF WAYS:: "<< Nqueens(n,arr,0);
    return 0;
}