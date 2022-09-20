class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26 , 0);
        int start = 0;
        int ans = 0;
        int maxCount = 0;
        
        for(int end = 0 ; end < s.size() ; end++){
            freq[s[end] - 'A']++;
            maxCount = max(maxCount , freq[s[end] - 'A']);
            
            while(end - start - maxCount +1 > k){
                freq[s[start] - 'A']--;
                start++;
                }
            ans = max(ans , end - start + 1);
            
        }
        return ans;
        
    }
};