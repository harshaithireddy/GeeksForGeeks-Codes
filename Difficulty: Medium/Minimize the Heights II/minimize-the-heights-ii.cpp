class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        int diff = arr[n-1] - arr[0];
        
        int maxi;
        int mini;
        for(int i = 1; i < n; i++) {
            if(arr[i] - k < 0) continue;
            
            maxi = max(arr[i-1] + k, arr[n-1] - k);
            mini = min(arr[0] + k, arr[i] - k);
            
            diff = min(diff, maxi - mini);
        }
        return diff;
    }
};