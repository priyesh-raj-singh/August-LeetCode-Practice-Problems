class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int x =nums[0];
        
        for(int i=1;i<n;i++){
            if(abs(nums[i])<abs(x)){
                x = nums[i];
            }
            else if(abs(nums[i])==abs(x)){
                if(nums[i]>x){
                    x = nums[i];
                }
            }
        }
        return x;
    }
};