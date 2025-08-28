class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int i = 0, j = 0, cnt = 0, maxi = 0;
        
        while(j < n) {
            if(arr[j] == 0) cnt++;
            while(cnt > k) {
                if(arr[i] == 0) cnt--;
                i++;
            }
            maxi = max(maxi, j - i + 1);
            j++;
        }
        return maxi;
    }
};
