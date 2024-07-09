//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        sort(arr.begin(), arr.end());
        int closest = INT_MIN;
    
        for(int i = 0; i < arr.size() - 2; i++) {
            int j = i + 1;
            int k = arr.size() - 1;
            
            while(j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum == target) return sum;
                
                if(abs(closest - target) > abs(sum - target)) {
                    closest = sum;
                }
                else if(abs(closest - target) == abs(sum - target)) {
                    closest = max(closest, sum);
                }
                
                if(sum < target) j++;
                else k--;
            }
        }
        return closest;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends