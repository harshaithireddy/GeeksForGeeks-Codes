class Solution {
  public:
    int frogJump(int i, vector<int>& height, vector<int>& dp) {
        if(i == 0) return 0;
        if(dp[i] != -1) return dp[i];
        
        int oneJump = frogJump(i - 1, height, dp) + abs(height[i] - height[i - 1]);
        int twoJump = INT_MAX;
        if(i > 1) twoJump = frogJump(i - 2, height, dp) + abs(height[i] - height[i - 2]);
    
        return dp[i] = min(oneJump, twoJump);
    }
    
    int minCost(vector<int>& height) {
        // Code here
        int res = 0;
        int n = height.size();
        vector<int> dp(n, -1);
        
        return frogJump(n - 1, height, dp);
    }
};