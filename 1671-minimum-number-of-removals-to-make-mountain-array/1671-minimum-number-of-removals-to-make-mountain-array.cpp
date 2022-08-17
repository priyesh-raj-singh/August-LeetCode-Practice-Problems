class Solution {
public:
 
    int minimumMountainRemovals(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp1(n , 0) , dp2(n , 0);
        int ans = 1;
        for(int i = 1 ; i<n ; i++){
            for(int j = 0 ; j<i ; j++)
                if(nums[i]>nums[j])
                    dp1[i] = max(dp1[i] , 1 + dp1[j]);
        }
        
        for(int i = n-2 ; i>=0 ; i--){
            for(int j = n-1 ; j>i ; j--)
                if(nums[i]>nums[j])
                    dp2[i] = max(dp2[i] , 1+dp2[j]);
        }
        int res = 0;
        for(int i = 0 ; i<n ; i++){
            if(dp1[i]!=0 and dp2[i]!=0)
                res = max(res , dp1[i] + dp2[i]);
        }
        return n - (res+1);
        
    }
};