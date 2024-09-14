//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        vector<int> positives;
        vector<int> negatives;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] >= 0) positives.push_back(arr[i]);
            else negatives.push_back(arr[i]);
        }
        
        int i = 0;
        int j = 0;
        vector<int> res;
        while(i < positives.size() && j < negatives.size()) {
            res.push_back(positives[i++]);
            res.push_back(negatives[j++]);
        }
        
        while(i < positives.size()) res.push_back(positives[i++]);
        while(j < negatives.size()) res.push_back(negatives[j++]);
        
        arr = res;
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends