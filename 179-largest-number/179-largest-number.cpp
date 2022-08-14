
class Solution {
public:
     static bool cmp(int a, int b){
            string s1 = to_string(a), s2=to_string(b);
            return s1+s2 > s2+s1;
        }
    string largestNumber(vector<int>& nums) {
        sort(begin(nums),end(nums), cmp);
        string s="";
        for(auto &n : nums) s+=to_string(n);
        if(nums[0]==0) return "0";
        return s;
    }
};