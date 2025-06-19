class Solution {
  public:
    string caseSort(string& s) {
        vector<char> lower, upper;

        for(char c : s) {
            if(isupper(c)) upper.push_back(c);
            else lower.push_back(c);
        }

        sort(lower.begin(), lower.end());
        sort(upper.begin(), upper.end());

        int i = 0, j = 0;
        for(int k = 0; k < s.length(); k++) {
            if(isupper(s[k])) {
                s[k] = upper[i++];
            }
            else {
                s[k] = lower[j++];
            }
        }

        return s;
    }
};
