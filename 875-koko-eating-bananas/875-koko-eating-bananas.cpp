class Solution {
public:
      int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin() , piles.end());
        while(left<=right){
            int mid = (left+right)/2;
            if(isEatable(piles , mid , h))
                right = mid-1;
            else
                left = mid+1;
        }
        return left;
        
    }
    
    bool isEatable(vector<int> &piles , int k , int h){
       long long hours = 0;
        for(int pile : piles){
            int div = pile / k;
            hours += div;
            if(pile % k != 0) hours++;
            
        }
        return hours <= h;
    }
};