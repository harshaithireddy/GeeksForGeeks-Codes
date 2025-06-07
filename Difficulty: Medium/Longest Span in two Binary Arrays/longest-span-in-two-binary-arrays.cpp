class Solution {
  public:
    int longestCommonSum(vector<int> &a1, vector<int> &a2) {
        // Code here.
        int n = min(a1.size(), a2.size());
        unordered_map<int, int> mpp;
        
        int res = 0, sum=0;
        mpp[0] = -1;
        for(int i = 0; i < n; i++) {
            sum += a1[i] - a2[i];
            if(mpp.count(sum)) {
                res = max(res, i - mpp[sum]);
            }
            else {
                mpp[sum] = i;
            }
        }
        return res;
    }
};