class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        priority_queue<int> pq;
        pq.push(nums[0]);
        
        
        for(int i=1;i<n;i++){
            if(abs(nums[i])<abs(pq.top())){
                pq.pop();
                pq.push(nums[i]);
            }
            else if(abs(nums[i])==abs(pq.top())){
                if(nums[i]>pq.top()){
                    pq.pop();
                    pq.push(nums[i]);
                }
            }
        }
        return pq.top();
    }
};