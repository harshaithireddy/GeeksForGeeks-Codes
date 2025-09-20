class Solution {
  public:
    int longestSubarray(vector<int>& arr) {
        // code here
        int n = arr.size();
        int maxi = 0;
         
         stack<int> st;

         for(int i = 0; i <= n; i++) {
             int next = (i == n ? INT_MAX : arr[i]);
             
             while(!st.empty() && arr[st.top()] < next) {
                 int curr = arr[st.top()];
                 st.pop();
                 
                 int len = st.empty() ? i : i - st.top() - 1;
                 
                 if(len >= curr) maxi = max(maxi, len);
             }
             st.push(i);
         }
         return maxi;
    }
};