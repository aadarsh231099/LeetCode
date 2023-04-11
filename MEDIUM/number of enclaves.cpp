//https://leetcode.com/problems/number-of-enclaves/
//Number of Enclaves

class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
int m=grid[0].size();
int n=grid.size();
vector<vector<int>> vis(n,vector<int>(m,0));
queue<pair<int,int>>q;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(i==0||i==n-1||j==0||j==m-1)
        {
            if(grid[i][j]==1)
            {
                q.push({i,j});
                vis[i][j]=1;
            }
        }
    }
}

int drow[]={-1,0,+1,0};
int dcol[]={0,+1,0,-1};

while(!q.empty())
{
    int row=q.front().first;
    int col=q.front().second;
    q.pop();
    for(int i=0;i<4;i++)
    {
        int nrow=row+drow[i];
        int ncol=col+dcol[i];
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && grid[nrow][ncol]==1)
        {
             q.push({nrow,ncol});
             vis[nrow][ncol]=1;
            
        }
    }
}

int c=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(vis[i][j]==0 && grid[i][j]==1)
            c++;
    }
}
return c;
}
};