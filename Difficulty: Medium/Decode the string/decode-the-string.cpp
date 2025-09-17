class Solution {
  public:
    string decodedString(string &s) {
        // code here
        stack<int> cnt;
        stack<string> st;
        string curr = "";
        int num = 0;

        for(char c : s) {
            if(isdigit(c)) {
                num = num * 10 + (c - '0');
            } 
            else if(c == '[') {
                cnt.push(num);
                st.push(curr);
                num = 0;
                curr = "";
            } 
            else if(c == ']') {
                int repeat = cnt.top();
                cnt.pop();
                string prev = st.top();
                st.pop();

                string temp = "";
                for(int i = 0; i < repeat; i++) {
                    temp += curr;
                }
                curr = prev + temp;
            } 
            else {
                curr += c;
            }
        }
        return curr;
    }
};