class Solution {
public:
     void dfs(int row,int col,vector<vector<char>> &grid,vector<vector<int>> & visited)
    {
        visited[row][col] = 1;
        int n = grid.size();
        int m = grid[0].size();
         vector<int> dr,dc;
      dr={-1,1,0,0};
       dc={0,0,-1,1}; 
        
        
        for(int i=0;i<4;i++)
        {
          int nrow=row+dr[i],ncol=col+dc[i];
                
              if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !visited[nrow][ncol])  
              { 
                  dfs(nrow,ncol,grid,visited);
              }  
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
      int m=grid[0].size();  
      vector<vector<int>> visited(n,vector<int>(m,0));
      int cnt=0;  
      
      for(int row =0;row<n;row++)
      {
          for(int col=0;col<m;col++)
          {
              if(!visited[row][col] && grid[row][col]=='1')
              {
                  cnt++;
                  dfs(row,col,grid,visited);
              }
          }
      }
    return cnt;    
    }
};