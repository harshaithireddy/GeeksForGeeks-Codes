class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        // code here
        unordered_map<int, int> freq;
        for(auto it : arr){
            freq[it]++;
        }
        
        int n = arr.size();
        stack<int> st;
        vector<int> res(n, -1);
        
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && freq[st.top()] <= freq[arr[i]]) {
                st.pop();
            }
            
            if(!st.empty()) {
                res[i] = st.top();
            }
            
            st.push(arr[i]);
        }
        return res;
    }
};
