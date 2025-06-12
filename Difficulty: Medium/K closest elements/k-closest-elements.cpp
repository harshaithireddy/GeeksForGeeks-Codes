class Solution {
  public:
    static bool comp(pair<int, int>& a, pair<int, int>& b) {
        if(a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    }
    
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        // Code here
        vector<pair<int, int>> V;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == x) continue;
            V.push_back({abs(arr[i] - x), arr[i]});
        }
        
        sort(V.begin(), V.end(), comp);
        vector<int> res;
        
        int i = 0;
        while(k--) {
            res.push_back(V[i].second);
            i++;
        }
        return res;
    }
};