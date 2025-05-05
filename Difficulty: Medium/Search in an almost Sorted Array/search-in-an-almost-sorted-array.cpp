//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        int n = arr.size();
        int l = 0;
        int r = n - 1;
        
        while(l <= r) {
            int mid = (l + r) / 2;
    
            if(arr[mid] == target) return mid;
            if(mid - 1 >= l && arr[mid - 1] == target) return mid - 1;
            if(mid + 1 <= r && arr[mid + 1] == target) return mid + 1;
    
            if(target < arr[mid]) r = mid - 2;
            else l = mid + 2;
        }
        return -1;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        int target;
        cin >> target;
        cin.ignore();
        Solution sln;
        int ans = sln.findTarget(arr, target);
        cout << ans << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends