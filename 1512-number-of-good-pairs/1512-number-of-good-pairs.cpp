class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int , int> mp;
        for(int i = 0 ; i<nums.size() ; i++)
            mp[nums[i]]++;
        int count = 0;
        for(auto it : mp){
            count+= (it.second*(it.second - 1))/2;
            
        }
        return count;
        
    }
};