class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> pos;
        vector<int> ans;
        for(int i = 0 ; i<s.size(); i++){
            if(s[i]==c)
                pos.push_back(i);
        }
        
        for(int i = 0; i<s.size() ; i++){
            int mini = INT_MAX;
            for(int j = 0 ; j<pos.size() ; j++){
                mini = min(mini , abs(i-pos[j]));
            }
            ans.push_back(mini);
        }
        return ans;
        
    }
};