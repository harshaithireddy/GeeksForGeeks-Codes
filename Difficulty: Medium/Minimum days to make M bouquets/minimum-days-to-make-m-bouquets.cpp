class Solution {
  public:
    int minDaysBloom(vector<int>& arr, int k, int m) {
        int maxi = *max_element(arr.begin(), arr.end());
        
        long long tot = 1LL * k * m;
        if(tot > arr.size()) return -1;

        int left = 0;
        int right = maxi;
        int res = INT_MAX;
        
        while(left <= right) {
            int mid = (left + right) / 2;
            
            int temp = 0;
            int cnt = 0;
            
            for(int i = 0; i < arr.size(); i++) {
                if(arr[i] <= mid) {
                    cnt++;
                    if(cnt == k) {
                        temp++;
                        cnt = 0;
                    }
                }
                else {
                    cnt = 0;
                }
            }

            if(temp >= m) {
                res = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        
        if(res == INT_MAX) return -1;
        return res;
    }
};
