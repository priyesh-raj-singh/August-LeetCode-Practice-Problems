class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string> s;
        for(int i = 0 ; i<word.size() ; i++){
            if(isdigit(word[i])){
                string ans = "";
                while(word[i]=='0') i++;
                while(isdigit(word[i])==true)
				{

				ans+=word[i];
				i++;
				}
                s.insert(ans);
                
                
            }
        }
        return s.size();
        
    }
};