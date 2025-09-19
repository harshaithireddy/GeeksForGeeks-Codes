class Solution {
  public:
    int minParentheses(string& s) {
        // code here
        int cnt = 0, res = 0;
        for(auto ch : s) {
            if(ch == '(') cnt++;
            else if(ch == ')' && cnt > 0) cnt--;
            else res++;
        }
        return res + cnt;
    }
};