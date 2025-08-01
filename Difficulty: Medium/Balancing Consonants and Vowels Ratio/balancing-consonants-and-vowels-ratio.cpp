class Solution {
  public:
    int countBalanced(vector<string>& arr) {
        // code here
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        
        int vowels = 0, cons = 0;
        int res = 0;
        
        for(auto it : arr) {
            for(auto c : it) {
                if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vowels++;
                else cons++;
            }
            
            int x = vowels - cons;
            res += mpp[x];
            mpp[x]++;
        }
        return res;
    }
};