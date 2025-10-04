//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:

    bool fun(int i, vector<int>& arr, int sum, vector<vector<int>>& dp) {
        if(sum == 0) return true;
        if(i >= arr.size()) return false;
        
        if(dp[i][sum] != -1) return dp[i][sum];

        bool take = false;
        if(arr[i] <= sum) {
            take = fun(i + 1, arr, sum - arr[i], dp);
        }
        bool notTake = fun(i + 1, arr, sum, dp);

        dp[i][sum] = take || notTake;
        return dp[i][sum];
    }

    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
        
        return fun(0, arr, sum, dp);
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends