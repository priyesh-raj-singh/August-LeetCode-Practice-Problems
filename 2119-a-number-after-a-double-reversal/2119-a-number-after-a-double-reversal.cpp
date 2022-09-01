class Solution {
public:
    int reverse(int num){
        string s = to_string(num);
        int n = s.size();
        for(int i = 0 ; i<s.size()/2 ; i++){
            swap(s[i] , s[n-i-1]);
        }
        int ans = stoi(s);
        return ans;
    }
    bool isSameAfterReversals(int num) {
        int k = reverse(num);
        int m = reverse(k);
        if(m==num)
            return true;
        return false;
        
    }
};