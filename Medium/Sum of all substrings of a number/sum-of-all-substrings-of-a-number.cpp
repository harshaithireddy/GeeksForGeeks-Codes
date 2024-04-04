//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s){
        
        // your code here
        int MOD = 1e9 + 7;
        long long res = 0;
        long long prev = 0;
        
        for(int i = 0; i < s.size(); i++) {
            int num = s[i] - '0';
            prev = ((i + 1) * num % MOD + (10 * prev) % MOD) % MOD;
            res = (res + prev) % MOD;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking string
        string s;
        cin>>s;
        Solution ob;
        //calling sumSubstrings() function
        cout << ob.sumSubstrings(s) << endl;
        
    }
    return 0;
}

// } Driver Code Ends