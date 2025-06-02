class Solution {
  public:
    int minCandy(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> left(n, 1);
        left[0] = 1;
        for(int i = 1; i < n; i++) {
            if(arr[i] > arr[i-1]) left[i] = left[i-1] + 1;
            else left[i] = 1;
        }
        int sum = left[n-1];
        int right = 1;
        for(int i = n-2; i >= 0; i--) {
            if(arr[i] > arr[i+1]) right += 1;
            else right = 1;
            
            sum += max(left[i], right);
        }
        return sum;
    }
};
