class Solution {
  public:
    int minCost(vector<int>& heights, vector<int>& cost) {
        // code here
        int l = *min_element(heights.begin(), heights.end());
        int r = *max_element(heights.begin(), heights.end());
        int n = cost.size();
        
        int res = INT_MAX;
        
        while(l <= r) {
            int m = l + (r - l) / 2;
            int total = 0, low = 0, high = 0;
            
            for(int i = 0; i < n; i++) {
                total += (abs(heights[i] - m)) * cost[i];
            }
            for(int i = 0; i < n; i++) {
                low += (abs(heights[i] - (m - 1))) * cost[i];
            }
            for(int i = 0; i < n; i++) {
                high += (abs(heights[i] - (m + 1))) * cost[i];
            }
            
            res = min(res, total);
            
            if(low < total) r = m - 1;
            else if(high < total) l = m + 1;
            else break;
        }
        return res;
    }
};
