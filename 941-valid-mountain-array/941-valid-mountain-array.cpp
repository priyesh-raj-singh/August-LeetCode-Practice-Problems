class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n<3)
            return false;
        int i = 0 , j = n-1 ;
        
        while(i<n && arr[i+1]>arr[i])
            i++;
        
        while(j>0 and arr[j-1]>arr[j])
            j--;
        
        while(i>0 and i==j and j<n-1)
            return true;
        
        return false;
            
        
    }
};