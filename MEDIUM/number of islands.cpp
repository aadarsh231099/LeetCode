//https://leetcode.com/problems/number-of-islands/
//Number of Islands
class Solution {
public:
    void bfs(int row,int col,vector<vector<bool>> &visited,vector<vector<char>> grid,int delrow[],int delcolumn[])
    {
        int n=grid.size();
        int m=grid[0].size();

        visited[row][col]=1;
        queue<pair<int,int>> q;
        q.push({row,col});

        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();

            for(int i=0;i<4;i++)
            {
                int nrow=r+delrow[i];
                int ncol=c+delcolumn[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !visited[nrow][ncol] && grid[nrow][ncol]=='1')
                {
                    q.push({nrow,ncol});
                    visited[nrow][ncol]=1;
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),0));
        int dr[4]={1, 0, -1, 0};
        int dc[4]={0, -1, 0, 1};
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(!visited[i][j] && grid[i][j]=='1')
                {
                    bfs(i,j,visited,grid,dr,dc);
                    count++;
                }
            }
        }

        return count;
    }
};