class Solution {
  public:
    vector<int> valid(vector<int>& arr) {
        // Your code goes here
        int ind = 0;
        int n = arr.size();
        
        for(int i = 1; i < n; i++) {
            if(arr[i] == 0) continue;
            else if(arr[i] == arr[ind]) {
                arr[ind] = arr[i] + arr[i];
                arr[i] = 0;
            }
            else {
                ind = i;
            }
        }
        
        ind = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] != 0) {
                arr[ind++] = arr[i];
            }
        }
        while(ind < n) {
            arr[ind++] = 0;
        }
        return arr;
    }
};
