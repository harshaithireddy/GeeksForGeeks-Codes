class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        // code here
        int n = arr.size();
        stack<int> st;
        vector<int> res(n, -1);
        
        for(int i = 0; i < 2 * n; i++) {
            while(!st.empty() && arr[st.top()] < arr[i % n]) {
                int index = st.top();
                st.pop();
                res[index] = arr[i % n];
            }
            if(i < n) {
                st.push(i);
            }
        }
        return res;
    }
};