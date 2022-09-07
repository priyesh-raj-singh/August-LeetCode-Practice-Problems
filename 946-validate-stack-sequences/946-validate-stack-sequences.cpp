class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size();
        int i = 0 , j = 0;
        stack<int> st;
        
        while(i<n and j<n){
            st.push(pushed[i]);
            i++;
            
            while(!st.empty() and st.top()==popped[j]){
                st.pop();
                j++;
            }
        }
        return st.empty();
        
    }
};