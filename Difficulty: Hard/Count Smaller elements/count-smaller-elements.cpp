//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

class Solution {
  public:
    int binarySearch(vector<int>& V, int key, int l, int h) {
        while(l <= h) {
            int mid = (l + h) / 2;
            if(V[mid] >= key) h = mid - 1;
            else l = mid + 1;
        }
        return l;
    }
    
    vector<int> constructLowerArray(vector<int> &arr) {
        int n = arr.size();
        vector<int> res(n, 0);
        vector<int> V;
        V.push_back(arr[n - 1]);
        int k = n - 2;
        
        for(int i = n - 2; i >= 0; i--) {
            int ind = binarySearch(V, arr[i], 0, V.size() - 1);
            res[k--] = ind;
            
            V.insert(V.begin() + ind, arr[i]);
        }
        
        return res;
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
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends