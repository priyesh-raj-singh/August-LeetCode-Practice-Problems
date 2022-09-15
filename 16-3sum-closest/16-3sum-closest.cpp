class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         sort(nums.begin() , nums.end());
        int n = nums.size();
        int closest = nums[0] + nums[1] + nums[2];
       
        for(int i = 0 ; i<n-1 ; i++){
            int lo = i+1 , hi = n-1;
            while(lo<hi){
                int curr = nums[i] + nums[lo] + nums[hi];
                if(curr ==target)
                    return target;
                
                if(abs(target-curr)<abs(target-closest)){
                    closest = curr;
                }
                if(curr>target)
                    hi--;
                else
                    lo++;
            }
            
        }
        return closest;
       
       
        
    }
};