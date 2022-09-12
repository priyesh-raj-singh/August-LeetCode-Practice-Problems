class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        int i = 0 , j = n-1;
        int score = 0;
        sort(tokens.begin() , tokens.end());
        
        while(i<j){
            if(tokens[i]<=power){
                
                power-=tokens[i];
                i++;
                score++;
            }
            
            else if(score>=1 and tokens[j]+power>=tokens[i]){
                power+=tokens[j];
                j--;
                score--;
            }
            else break;
        }
        while(i<j+1 and tokens[i]<=power){
           
            power-=tokens[i];
            i++;
             score++;
        }
        return score;
    }
};