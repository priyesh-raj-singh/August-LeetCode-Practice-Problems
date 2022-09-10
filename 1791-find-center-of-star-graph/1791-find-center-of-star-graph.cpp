class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> v;
        for(int i = 0 ; i<edges.size() ; i++){
            for(int j = 0 ; j<edges[0].size() ; j++){
                v.push_back(edges[i][j]);
            }
        }
        
        unordered_map<int , int> mp;
        for(int i = 0 ; i<v.size() ; i++){
            mp[v[i]]++;
            
        }
        
        int ans = 0 , maxi = 0;
        for(auto it: mp){
            if(it.second>maxi){
                maxi = it.second;
                ans = it.first;
            }
        }
        return ans;
        
    }
};