// User function Template for C++
class Solution {
  public:
    string lexicographicallySmallest(string s, int k) {
        // code here
        int n = s.size();

        if((n > 0) && ((n & (n-1)) == 0)) k /= 2;
        else k *= 2;

        if(k >= n) return "-1";

        stack<char> st;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && k > 0 && st.top() > s[i]) {
                st.pop();
                k--;
            }
            st.push(s[i]);
        }

        string res = "";
        while(!st.empty() && k > 0){
            st.pop();
            k--;
        }
        while(!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        
        return res;
    }
};