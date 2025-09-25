class Solution {
  public:
    vector<string> generateBinary(int n) {
        // code here
        vector<string> res(n);
        res[0] = "1";
        
        for(int i = 2; i <= n; i++) {
            res[i - 1] = res[(i / 2) - 1];
            if(i % 2 == 0) {
                res[i - 1].push_back('0'); 
            }
            else {
                res[i - 1].push_back('1'); 
            }
        }
        return res;
    }
};