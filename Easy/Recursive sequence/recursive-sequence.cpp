//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n) {
        // code here
        long long sum = 0;
        int MOD = 1e9 + 7;
        for(int i = 1; i <= n; i++) {
            long long temp = 1;
            long long start = ((i-1)*i) / 2;
            long long end = (i * (i+1)) / 2;
            for(int j = start+1; j <= end; j++) {
                temp = (temp * j) % MOD;
            }
            sum = (sum + temp) % MOD;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends