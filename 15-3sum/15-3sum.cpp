class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
      set<vector<int>> store;
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            
            int left = i + 1, right = n - 1;
            while(left < right)
            {
                if(nums[left] + nums[right] + nums[i] == 0)
                {
                    store.insert({nums[i], nums[left], nums[right]});
                    right--;
                    left++;
                }
                else if(nums[left] + nums[right] + nums[i] > 0)
                    right--;
                else
                    left++;
            }
        }
        
        for(auto i : store)
        {
            res.push_back(i);
        }
        
        return res;
    }
};