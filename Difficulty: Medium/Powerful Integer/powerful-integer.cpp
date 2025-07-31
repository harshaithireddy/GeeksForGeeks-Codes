class Solution {
public:
    int powerfulInteger(vector<vector<int>>& intervals, int k) {
        map<int, int> diff;

        for (auto& interval : intervals) {
            diff[interval[0]] += 1;
            diff[interval[1] + 1] -= 1;
        }

        int curr = 0;
        int res = -1;
        int prev = -1;

        for(auto it : diff) {
            int point = it.first;
            if(curr >= k && prev != -1) {
                res = max(res, point - 1);
            }
            curr += it.second;
            prev = point;
        }

        return res;
    }
};

