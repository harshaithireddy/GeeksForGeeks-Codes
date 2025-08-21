class Solution {
  public:
    int maxMinDiff(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int low = 0;
        int high = arr[n-1] - arr[0];
        
        while(low <= high) {
            int mid = (low + high) / 2;
            int prev = arr[0];
            int cnt = 1;
            
            for(int i = 1; i < arr.size(); i++) {
                if(arr[i] - prev >= mid) {
                    prev = arr[i];
                    cnt++;
                }
            }
            if(cnt >= k) low = mid + 1;
            else high = mid - 1;
        }
        return high;
    }
};
