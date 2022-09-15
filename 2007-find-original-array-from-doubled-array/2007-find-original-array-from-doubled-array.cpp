class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        int n = changed.size();
        sort(changed.begin() , changed.end());
        unordered_map<int , int> mp;
        for(int i = 0 ; i<n ; i++){
            mp[changed[i]]++;
             }
        
        for(int it: changed){
            if(mp.find(2*it)!=mp.end() and mp[it]!=0 and mp[2*it]!=0){
                mp[it]--;
                mp[2*it]--;
                ans.push_back(it);
            }
        }
         for(auto i : mp){
            if(i.second != 0){
                return vector<int>();
            }
        }
        return ans;
        
        
        
    }
};