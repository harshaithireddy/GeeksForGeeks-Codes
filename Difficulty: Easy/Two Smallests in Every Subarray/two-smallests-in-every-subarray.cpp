//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int pairWithMaxSum(vector<int>& arr) {
        // code here
        if(arr.size() == 1) return -1;
        
        int left = 1;
        int right = arr.size();
        int nums = arr[0];
        
        int res = INT_MIN;
        while(left < right) {
            nums += arr[left];
            res = max(res,nums);
            nums = arr[left];
            left++;
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();

    while (tc--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> a;
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution obj;
        int res = obj.pairWithMaxSum(a);
        cout << res << endl;
    }
}
// } Driver Code Ends