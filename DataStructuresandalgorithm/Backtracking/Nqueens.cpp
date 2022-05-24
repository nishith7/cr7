#include<iostream>
#include<vector>
using namespace std;


void printArray(int n,int board[][20]){
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
 

bool boardIsSafe(int board[][20],int n,int x,int y)
{

    
    //checking the column
    for (int k = 0; k < x; k++)
    {
         if (board[k][y]==1)
         {
             return false;
         }
         
    }
    //checking the left diagonal
    int i = x;
    int j = y;
    while (i>=0 and j>=0)
    {
        /* code */
        if (board[i][j]==1)
        {
            /* code */
            return false;
        }
        i--,j--;
    }
    //checking right diagonal

    //your code is corrected here.
    //we have to initialize i & j again otherwise it will have -1 value for both i & j
    i=x;
    j=y;
    while (i>=0 and j<n)
    {
        /* code */
        if (board[i][j]==1)
        {
            /* code */
            return false;
        }
        i--,j++;
    }
    
    return true;
}

int solveNqueen(int n,int board[][20],int i){
 
    //base case
    if(i==n){
        printArray(n,board);
        return 1;
    }
    //rec case
    int ways = 0;
    for (int j = 0; j < n; j++)
    {
        /* code */
        if(boardIsSafe(board,n,i,j)){
            board[i][j]=1;
            ways+=solveNqueen(n,board,i+1);
            //backtracking
            board[i][j]=0;
 
        }
      
    }
      return ways;
}
 
 
int main(){
  int board[20][20] = {0};
  int n;
  cin>>n;
 
  solveNqueen(n,board,0);

  return 0;
}