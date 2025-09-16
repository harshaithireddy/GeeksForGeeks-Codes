class Solution {
  public:
    bool isOper(string op){
        return (op == "+" || op == "-" || op == "^" || op == "/" || op == "*");
    }
    
    int solve(char op , stack<int> &st){
        int first = st.top();
        st.pop();
        int second = st.top();
        st.pop();
        int res = 0;
        if(op == '+') res = first + second;
        else if (op == '*') res = first * second;
        else if (op == '/') res = floor((float)second / (float)first);
        else if (op == '-') res = second - first;
        else if (op == '^') res = pow(second, first);
        
        return res;

    }
    int evaluatePostfix(vector<string>& arr) {
        // code here
        stack<int> st;
        for(auto it : arr) {
            int val = 0;
            if(isOper(it)) {
                val = solve(it[0] , st);
            }
            else {
                val = stoi(it);
            }
            st.push(val);
        }
        
        int res = st.top();
        st.pop();
        
        return res;
    }
};