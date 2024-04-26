//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    int binarySum(vector<int>& arr, int N, int target) {
        if(target < 0) return 0;
        int l = 0;
        int r = 0;
        int sum = 0;
        int cnt = 0;
        while(r < N) {
            sum += arr[r];
            while(sum > target) {
                sum -= arr[l];
                l++;
            }
            cnt += (r - l + 1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& arr, int N, int target){
        // code here
        int a = binarySum(arr, N, target);
        int b = binarySum(arr, N, target - 1);
        
        return a - b;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int target; 
        cin >> target;
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin >> arr[i];
        Solution obj;
        cout<<obj.numberOfSubarrays(arr, N, target)<<endl;
    }
    return 0;
}
// } Driver Code Ends