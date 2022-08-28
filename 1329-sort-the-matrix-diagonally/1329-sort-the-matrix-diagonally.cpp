class Solution {
public:
    vector<vector<int>> solve(int i , int j , vector<vector<int>> &mat){
        vector<int> v;
        int r = i , c = j;
        while(r<mat.size() and c<mat[0].size()){
            v.push_back(mat[r][c]);
            r++;
            c++;
        }
        sort(v.begin() , v.end());
        for(auto it: v){
            mat[i][j] = it;
            i++;
            j++;
        }
        return mat;
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
      for(int i = 0 ; i<mat[0].size() ; i++){
          solve(0 , i , mat);
      }
        for(int i = 1 ; i<mat.size() ; i++){
            solve(i , 0 , mat);
        }
        return mat;
        
    }
      
     
};