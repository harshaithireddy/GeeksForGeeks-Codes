class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int l = 1, r = 0;
        for(int i = 0; i < arr.size(); i++) {
            r = max(r, arr[i]);
        } 
        
        while(l <= r) {
            int m = (l + r) / 2;
            int cnt = 0;
            for(int i = 0; i < arr.size(); i++) {
                if(arr[i] % m == 0) cnt += (arr[i] / m);
                else cnt += (arr[i] / m) + 1;
            }
            if(cnt <= k) r = m - 1;
            else l = m + 1;
        }
        return l;
    }
};