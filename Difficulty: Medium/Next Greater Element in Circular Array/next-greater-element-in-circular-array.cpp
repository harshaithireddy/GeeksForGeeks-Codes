class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> res(n, -1);
        stack<int> st;

        for(int i = 0; i < 2 * n; i++) {
            int num = arr[i % n];
    
            while(!st.empty() && arr[st.top()] < num) {
                res[st.top()] = num;
                st.pop();
            }

            if(i < n) st.push(i);
        }
        return res;
    }
};