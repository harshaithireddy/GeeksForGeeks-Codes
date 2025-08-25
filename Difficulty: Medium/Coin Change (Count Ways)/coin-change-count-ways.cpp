class Solution {
  public:
    int f(int ind, vector<int>& coins, int sum, vector<vector<int>>& dp) {
        if(ind == 0) {
            if(sum % coins[0] == 0) return 1;
            else return 0;
        }
        
        if(dp[ind][sum] != -1) return dp[ind][sum];
        
        int notPick = f(ind - 1, coins, sum, dp);
        int pick = 0;
        if(coins[ind] <= sum) {
            pick = f(ind, coins, sum - coins[ind], dp);
        }
        
        return dp[ind][sum] = pick + notPick;
    }
    
    int count(vector<int>& coins, int sum) {
        // code here.
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int> (sum + 1, -1));
        return f(n - 1, coins, sum, dp);
    }
};