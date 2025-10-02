class Solution {
  public:
    void f(int i, int n, int k, vector<int> V, vector<vector<int>>& res) {
        if(n == 0 && k == 0) {
            res.push_back(V);
            return;
        }
        if(n <= 0 || k <= 0) return;
        
        for(int j = i; j <= 9; j++) {
            V.push_back(j);
            f(j + 1, n - j, k - 1, V, res);
            V.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(int n, int k) {
        // code here
        vector<vector<int>> res;
        vector<int> V;
        f(1, n, k, V, res);
        
        return res;
    }
};