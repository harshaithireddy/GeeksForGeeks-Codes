class Solution {
  public:
    bool validgroup(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(n % k != 0)  return false;
        
        unordered_map<int,int> mpp;
        for(int num: arr) mpp[num]++;
        
        sort(arr.begin(), arr.end());
        
        for(int num: arr) {
            if(mpp[num] == 0) continue;
            
            for(int i = 0; i < k; i++) {
                if(mpp[num + i] == 0) return false;
                mpp[num + i]--;
            }
        }
        return true;
    }
};