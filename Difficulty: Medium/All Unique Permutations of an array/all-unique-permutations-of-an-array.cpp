class Solution {
  public:
    void f(int i, vector<int> &arr, set<vector<int>>& res) {
        if(i == arr.size()) {
            res.insert(arr);
            return;
        }
        for(int j = i; j < arr.size(); j++) {
            swap(arr[i], arr[j]);
            f(i + 1, arr, res);
            swap(arr[i], arr[j]);
        }
    }
    
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        // code here
        set<vector<int>> res;
        f(0, arr, res);
        vector<vector<int>> ans(res.begin(), res.end());
        
        return ans;
    }
};