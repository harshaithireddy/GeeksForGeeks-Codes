class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        unordered_map<char, int> mpp;
        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D'] = 500;
        mpp['M'] = 1000;
    
        int res = 0;
        int prev = 0;
    
        for(int i = s.size() - 1; i >= 0; i--) {
            int curr = mpp[s[i]];
    
            if(curr < prev) res -= curr;
            else res += curr;

            prev = curr;
        }
        return res;
    }
};