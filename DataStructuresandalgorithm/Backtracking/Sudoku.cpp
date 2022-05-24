#include <bits/stdc++.h>

using namespace std;

bool isSafe(int mat[][9],int i,int j,int no,int n){
    //check for row and column

    for(int k = 0;k<n;k++){
        if(mat[k][j]==no || mat[i][k]==no){
            return false;
        }
        //check for subgrid;
    }

    int sx = (i/3)*3;
    int sy = (j/3)*3;

    for(int x=sx;x<sx;x++){
        for(int y=sy;y<sy;y++){
            if(mat[x][y]==no){
                return false;
            }
        }
    }
    return true;
    

}

bool solve(int mat[][9], int i, int j, int n)
{
    // base case
    if (i == n)
    {
        // print solution
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }

        return true;
    }

    // rec case
    if (j == n)
    {
        return solve(mat, i + 1, 0, n);
    }

    // skip the cell which is already filled
    if (mat[i][j] != 0)
    {
        return solve(mat, i, j + 1, n);
    }

    // for loop for filling the cells
    for (int no = 1; no <= n; no++)
    {
        // whether is it safe to put the num or not
        if (isSafe(mat, i, j, no, n))
        {
            mat[i][j] = no;
            bool subprob = solve(mat, i, j + 1, n);
            if (subprob == true)
            {
                return true;
            }
        }
    }
    //if above doesnt work we do backtracking
    mat[i][j]=0;
    return false;
}

int main()
{
    int n = 9;
    int mat[][9] = {{5, 3, 0, 0, 7, 0, 0, 0, 0},
                    {6, 0, 0, 1, 9, 5, 0, 0, 0},
                    {0, 9, 8, 0, 0, 0, 0, 6, 0},
                    {8, 0, 0, 0, 6, 0, 0, 0, 3},
                    {4, 0, 0, 8, 0, 3, 0, 0, 1},
                    {7, 0, 0, 0, 2, 0, 0, 0, 6},
                    {0, 6, 0, 0, 0, 0, 2, 8, 0},
                    {0, 0, 0, 4, 1, 9, 0, 0, 5},
                    {0, 0, 0, 0, 8, 0, 0, 7, 9}};

                if(!solve(mat,0,0,n)){
                    cout<<"NO SOLUTION!!!";
                }

                return 0;
}