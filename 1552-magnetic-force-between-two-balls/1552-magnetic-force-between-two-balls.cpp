class Solution {
public:
    bool canPlace(int m , int n , vector<int> &pos , int sep){
        int count = 1 ;
        int loc = pos[0];
        for(int i = 1 ; i<n ; i++){
            int curr_loc = pos[i];
            if(curr_loc - loc >=sep){
                count++;
                loc = curr_loc;
                if(m==count)
                    return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& pos, int m) {
        sort(pos.begin() , pos.end());
        int n = pos.size();
        int s = 0 , e = pos[n-1] - pos[0];
        int ans = 0 ;
        
        while(s<=e){
            int mid = (s+e)/2;
            bool can = canPlace(m , n , pos , mid);
            if(can){
                ans = mid;
                s = mid+1;
            }
            else
                e = mid -1;
        }
        return ans;
    }
};