class Solution {
    private:
        void dfs(int node , vector<int> ls[] , vector<int> &vis){
            vis[node] = 1;
            for(auto it: ls[node]){
                if(!vis[it])
                    dfs(it , ls , vis);
            }
        }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<int> ls[V];
        int count = 0;
        for(int i = 0 ; i<V ; i++){
            for(int j = 0 ; j<V ; j++){
                if(isConnected[i][j]==1){
                    ls[i].push_back(j);
                    ls[j].push_back(i);
                }
            }
        }
        
        vector<int> vis(V , 0);
        for(int i = 0 ; i<V ; i++){
            if(!vis[i]){
                count++;
                dfs(i , ls , vis);
            }
        }
        return count;
        
    }
};