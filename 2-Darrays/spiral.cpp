#include<iostream>

using namespace std;

void print1(int arr[][100],int n,int m){
    //4 variables
    int s_row=0;
    int e_row=n-1;
    int s_column=0;
    int e_column=m-1;

    //outer loop traverse array in boundaries
    while(s_column <= e_column && s_row <= e_row){
        //start row
        for(int c=s_row;c<=e_row;c++){
            cout<<arr[s_row][c]<<" ";
        }
        
        //end column
        for(int r=s_row+1;r<=e_column;r++){
            cout<<arr[r][e_column]<<" ";
        }

        //end row
        for(int c=e_column-1;c>=s_column;c--){
            if(s_row==e_row){
                break;
            }
            cout<<arr[e_row][c]<<" ";
        }

        //start column
        for(int r=e_row-1;r>=s_row+1;r--){
            //avoid duplicates
            if(s_column==e_column){
                break;
            }
            cout<<arr[r][s_column]<<" ";
        }

        //update the variables of inner loop
        s_row++;
        e_row--;
        s_column++;
        e_column--;
    }


}


int main(){
    int n,m;
    cin>>n>>m;
    int arr[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    print1(arr,n,m);
    

}