class Solution {
  public:
    int countStrings(string &s) {
        // code here
        int n = s.size();
        unordered_map<int, int> mpp;
        for(int i = 0; i < n; i++) {
            mpp[s[i]]++;
        }
        
        bool flag = false;
        int res = 1;
        for(int i =  0; i < n; i++) {
            res += (n - i - 1);
            if(mpp[s[i]] > 1) {
                flag = true;
                res -= mpp[s[i]] - 1;
            }
            
            mpp[s[i]]--;
        }
        if(!flag) res--;
        return res;
    }
};
