//https://leetcode.com/problems/number-of-closed-islands/
//Number of Closed Islands

class Solution {
public:
    int dx[5] = {0,-1,0,1,0};
    void dfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int row, int col){
        int m=grid.size(),n=grid[0].size();
        vis[row][col]=1;
        for(int i=0;i<4;++i){
            int nrow=row+dx[i];
            int ncol=col+dx[i+1];
            if(nrow>0 && nrow<m-1 && ncol>0 && ncol<n-1 && grid[nrow][ncol]==0 && !vis[nrow][ncol]){
                dfs(grid,vis,nrow,ncol);
            }
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),islands = 0;
        if(m<3 || n<3) return 0;
        vector<vector<int>> vis(m,vector<int> (n,0));
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(i==0 || i==m-1 || j==0 || j==n-1){
                    vis[i][j]=1;
                }
            }
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(vis[i][j] && grid[i][j]==0){
                    dfs(grid,vis,i,j);
                }
            }
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(!vis[i][j] && grid[i][j]==0){
                    islands++;
                    dfs(grid,vis,i,j);
                }
            }
        }
        return islands;
    }
};