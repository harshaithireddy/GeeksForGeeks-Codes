//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sortIt(vector<long long>& arr) {
        // code here.
        int n = arr.size();
        long long count = 0;
        long long brr[n];
        
        for(int i = 0; i < n; i++)
            brr[i] = arr[i];
            
        long long k = 0;
        long long b = n-1;
        for(int i = 0; i < n; i++) {
            if(brr[i] % 2 != 0) {
                arr[k] = brr[i];
                k++;
            }
            else {
                arr[b] = brr[i];
                b--;
            }
        }
        sort(arr.begin(), arr.begin() + k, greater<int>());
        sort(arr.begin() + k, arr.end());
        
        return;
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        long long number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.sortIt(arr);

        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends