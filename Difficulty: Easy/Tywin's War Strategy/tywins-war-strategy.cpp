class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int troops = (n + 1) / 2;
        
        vector<int> V;
        
        for(int i = 0; i < n; i++) {
            int cost = (k - arr[i] % k) % k;
            V.push_back(cost);
        }
        
        sort(V.begin(), V.end());
        
        int res = 0;
        for(int i = 0; i < troops; i++) {
            res += V[i];
        }
        
        return res;
    }
};