class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int maxi = 0;
        for(int i = 1; i < arr.size(); i++) {
            maxi = max(maxi, arr[i] + arr[i-1]);
        }
        return maxi;
    }
};