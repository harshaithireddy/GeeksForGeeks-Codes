class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        int n = arr.size();
        map<int, int> mpp;
        
        for(auto it : arr) {
            mpp[it]++;
        }
        
        vector<int> res;
        for(auto it : mpp) {
            if(it.second > n/3) res.push_back(it.first);
        }
        return res;
    }
};