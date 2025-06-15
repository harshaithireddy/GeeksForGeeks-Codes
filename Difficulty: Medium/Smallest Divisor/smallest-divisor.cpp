class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int n = arr.size();
        int l = 1;
        int maxi = *max_element(arr.begin(), arr.end());
    
        int res = maxi;
        while(l <= maxi) {
            int mid = (l + maxi) / 2;
            int cnt = 0;
            
            for(auto it : arr) {
                cnt += ceil((double) it / mid);
            }
            if(cnt <= k) {
                res = mid;
                maxi = mid - 1;
            }
            else l = mid + 1;
        }
        return res;
    }
};
