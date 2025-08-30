class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        
        vector<int> V(n, 0);
        
        for(int i = 0; i < n; i++) {
            for(int j = 0;j < n; j++) {
                if(mat[i][j] == 1) {
                    V[j]++;
                    V[i]--;
                }
            }
        }
        
        int res = -1;
        for(int i = 0; i < n; i++) {
            if(V[i] == n-1) return i;
        }
        
        return -1;
    }
};