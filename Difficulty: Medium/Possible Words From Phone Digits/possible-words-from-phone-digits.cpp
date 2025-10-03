class Solution {
  public:
    void solve(vector<int>&arr, string& temp, int i, int& n,
        vector<string>& res, unordered_map<int, string>& mpp) {
        if(i == n) {
            res.push_back(temp);
            return;
        }
        
        for(int j = 0; j < mpp[arr[i]].size(); j++) {
            temp += mpp[arr[i]][j];
            solve(arr, temp, i + 1, n, res, mpp);
            temp.pop_back();
        }
        
        if(arr[i] == 1 || arr[i] == 0) solve(arr, temp, i + 1, n, res, mpp);
    }
    
    vector<string> possibleWords(vector<int> &arr) {
        // code here
        unordered_map<int, string> mpp;
        mpp[1] = "";
        mpp[2] = "abc";
        mpp[3] = "def";
        mpp[4] = "ghi";
        mpp[5] = "jkl";
        mpp[6] = "mno";
        mpp[7] = "pqrs";
        mpp[8] = "tuv";
        mpp[9] = "wxyz";
        
        string temp = "";
        vector<string> res;
        int n = arr.size();
        
        solve(arr, temp, 0, n, res, mpp);
        
        return res;
    }
};