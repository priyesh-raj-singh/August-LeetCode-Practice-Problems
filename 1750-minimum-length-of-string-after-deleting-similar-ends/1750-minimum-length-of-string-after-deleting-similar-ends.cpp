class Solution {
public:
    int minimumLength(string s) {
        int i = 0;
        int j = s.size()-1;
        
        while(i<j and s[i]==s[j]){
            char ch = s[i];
            while(i<=j and s[i] == ch) i++;
            while(i<=j and s[j]==ch) j--;
            
        }
        return j - i + 1;
        
    }
};