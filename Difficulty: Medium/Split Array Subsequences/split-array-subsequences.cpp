class Solution {
  public:
    bool isPossible(vector<int>& arr, int k) {
        // code here
        unordered_map<int, priority_queue<int, vector<int>, greater<int>>> mpp;
        for(int it : arr) {
            if(!mpp[it - 1].empty()) {
                int len = mpp[it - 1].top();
                mpp[it - 1].pop();

                mpp[it].push(len + 1); 
            } 
            else {
                mpp[it].push(1);
            }
        }
        for(auto p : mpp) {
            auto pq = p.second;
            while(!pq.empty()) {
                if(pq.top() < k) return false;
                pq.pop();
            }
        }

        return true;
    }
};
