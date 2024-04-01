//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
        int cnt = 0;
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        
        int sum = 0;
        
        for(int i = 0; i < N; i++) {
            sum += Arr[i];
            if(mpp.find(sum - k) != mpp.end()) {
                cnt += mpp[sum - k];
            }
            mpp[sum]++;
        }
        return cnt;
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
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends