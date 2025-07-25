class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        int n=mat1.size();
        int i = 0, j = 0, k = n-1, l = n-1;
        int res = 0;
        while(j < n && l >= 0) {
            if(mat1[j][i] + mat2[l][k] == x) {
                res++;
                i++;
                k--;
            }
            else if(mat1[j][i] + mat2[l][k] > x) k--;
            else i++;

            if(i >= n) {
                i = 0;
                j++;
            }
            if(k < 0) {
                k = n-1;
                l--;
            }
        }
        return res;
    }
};