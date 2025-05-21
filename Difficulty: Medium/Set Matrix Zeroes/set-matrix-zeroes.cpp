// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        
        vector<pair<int, int>> vec;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(mat[i][j] == 0) vec.push_back({i, j});
            }
        }
        
        for(auto it : vec) {
            int i = it.first, j = it.second;
            for(int k = 0; k < n; k++) {
                mat[k][j] = 0;
            }
            for(int k = 0; k < m; k++) {
                mat[i][k] = 0;
            }
        }
    }
};