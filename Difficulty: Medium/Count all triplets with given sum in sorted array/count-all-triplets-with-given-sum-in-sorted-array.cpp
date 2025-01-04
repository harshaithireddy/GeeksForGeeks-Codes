//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
        int res = 0;
        unordered_map<int, int> mpp;
        for(auto it : arr) mpp[it]++;
        
        for(int i = 0; i < arr.size(); i++) {
          mpp[arr[i]]--;
          for(int j = i-1; j >= 0;j--) {
              if(mpp.find(target - (arr[i] + arr[j])) != mpp.end())
                res += mpp[target - (arr[i] + arr[j])];
          }
      }
      return res;
    }
};

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();


//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends