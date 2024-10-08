//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        int maxi = arr[0];
        int sMaxi = -1;
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] > maxi) {
                sMaxi = maxi;
                maxi = arr[i];
            }
            else if(arr[i] < maxi && arr[i] > sMaxi) sMaxi = arr[i];
        }
        return maxi + sMaxi;
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
        int n = arr.size();
        Solution ob;
        int r = ob.pairsum(arr);
        cout << r << endl;
    }
    return 0;
}
// } Driver Code Ends