class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int , int> mp;
        for(int i = 0 ; i<arr.size() ; i++)
            mp[arr[i]]++;
        
        vector<int> v;
        for(auto it: mp)
            v.push_back(it.second);
        
        sort(v.begin() , v.end());
        int count = 0 , i = 0;
        while(i<v.size() and count+v[i]<=k){
            count+=v[i];
            i++;
            
            
        }
        return v.size() - i;
        
    }
};