class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
    
        int res = 0;
        
        while(pq.size() > 1) {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            
            int sum = x + y;
            res += sum;
            pq.push(sum);
        }
        return res;
    }
};