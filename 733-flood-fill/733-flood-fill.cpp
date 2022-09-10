class Solution {
    private:
    void dfs(vector<vector<int>> &image , int i , int j , int initial , int color){
        if(i<0 or i>=image.size() or j<0 or j>=image[0].size() or image[i][j]==color or image[i][j] !=initial){
            return ;
        }
        image[i][j] = color;
        dfs(image , i-1 , j, initial, color);
        dfs(image , i , j+1, initial, color);
        dfs(image , i+1 , j, initial, color);
        dfs(image , i , j-1, initial, color);
        
        
  
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initial = image[sr][sc];
        dfs(image , sr , sc , initial , color);
        return image;
        
    }
};