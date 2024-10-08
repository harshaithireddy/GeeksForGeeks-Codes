//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
        int n = nums.size();
        int cnt1 = 0, cnt2 = 0, ele1 = 0, ele2 = 0;
        
        for(int i = 0; i < n; i++) {
            if(ele1 == nums[i]) cnt1++;
            else if(ele2 == nums[i]) cnt2++;
            else if(cnt1 == 0) {
                cnt1++;
                ele1 = nums[i];
            }
            else if(cnt2 == 0) {
                cnt2++;
                ele2 = nums[i];
            }
            else {
                cnt1--;
                cnt2--;
            }
        }
        
        cnt1 = 0, cnt2 = 0;
        vector<int> res;
        for(int i = 0; i < n; i++) {
            if(nums[i] == ele1) cnt1++;
            else if(nums[i] == ele2) cnt2++;
        }
        
        if(cnt1 > n / 3) res.push_back(ele1);
        if(cnt2 > n / 3) res.push_back(ele2);
        
        if(res.empty()) return {-1};
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends