class Solution {
public:
    bool checkForMagic(int r,int c,vector<vector<int>>& grid){
        int sum = grid[r][c] + grid[r][c+1] + grid[r][c+2];
        unordered_set<int> ump;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(grid[r+i][c+j] < 1 || grid[r+i][c+j] > 9 || ump.count(grid[r+i][c+j])){
                    return false;
                }
                ump.insert(grid[r+i][c+j]);
            }
        }

        for(int i=0;i<3;i++){
            if((grid[r][c+i] + grid[r+1][c+i] + grid[r+2][c+i]) != sum){
                return false;
            }
            if((grid[r+i][c] + grid[r+i][c+1] + grid[r+i][c+2]) != sum){
                return false;
            }
        }

        if(grid[r][c] + grid[r+1][c+1] + grid[r+2][c+2] != sum) return false;
        if(grid[r][c+2] + grid[r+1][c+1] + grid[r+2][c] != sum) return false;

        return true;


    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        int count = 0;
        for(int i=0;i<=m-3;i++){
            for(int j = 0;j<=n-3;j++){
                if(checkForMagic(i,j,grid)){
                    count++;
                }
            }
        }
        return count;
        
    }
};