class Solution {
    private:
void bfs(int row , int col , vector<vector<int>> & vis , vector<vector<char>> & grid){
    vis[row][col] = 1;
        
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<int , int>> q;
    q.push({row , col});
    while(!q.empty()){
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        int delta_row[] = {-1, 0, 1, 0};
        int delta_col[] = {0, 1, 0, -1};
        
        for(int i = 0 ; i<4 ; i++){
            int nrow = r + delta_row[i];
            int ncol = c + delta_col[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                        vis[nrow][ncol] = 1;
                        q.push({nrow , ncol});
                    }
        }
    }
}
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        vector<vector<int>> vis (n , vector<int>(m , 0));
        
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                if(!vis[i][j] and grid[i][j] == '1'){
                    count++;
                    bfs(i , j , vis , grid);
                }
            }
        }
        return count;
        
        
    }
};