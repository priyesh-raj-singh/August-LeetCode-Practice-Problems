class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(arr[0]>k)
            return k;
        int count = k;
        for(int i = 0 ; i<arr.size() ; i++){
            if(arr[i]<=count)
                count++;
            else
                break;
        }
        return count;
        
    }
};