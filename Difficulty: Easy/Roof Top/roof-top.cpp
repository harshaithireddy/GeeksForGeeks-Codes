//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        // Your code here
        int maxCount=0;
        int currCount=0;
        for(int i = 0; i < arr.size()-1; i++) {
            if(arr[i] < arr[i+1]){
                currCount++;
            }
            else {
             maxCount= max(maxCount,currCount);
             currCount = 0;
            }
        }
         return maxCount = max(maxCount, currCount);
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.maxStep(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends