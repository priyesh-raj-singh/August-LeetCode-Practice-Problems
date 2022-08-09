class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()%2!=0)
            return {};
        vector<int> ans;
        map<int , int> mp;
        sort(changed.begin() , changed.end() , greater<int>());
        
        for(int i = 0 ; i<changed.size() ; i++){
            if(mp.find(2*changed[i]) !=mp.end() and mp[changed[i]*2]!=0 ){
                ans.push_back(changed[i]);
                mp[2*changed[i]]--;
               
            }
            else
                mp[changed[i]]++;
        }
        if(ans.size()!=(changed.size()/2)) return {};
        return ans;
        
    }
};