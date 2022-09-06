class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char , int> mp;
        for(int i = 0 ; i<s.size() ; i++){
            if(mp.find(s[i])==mp.end())
                mp[s[i]]=i;
            else
                if((i-mp[s[i]] -1) != distance[s[i] - 'a']) return false;
        }
        return true;
        
    }
};