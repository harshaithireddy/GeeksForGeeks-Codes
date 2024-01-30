//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<bool> Primes(N+1, true);
        Primes[0] = false;
        Primes[1] = false;
        for(int i = 0; i*i <= N; i++) {
            if(Primes[i] == true) {
                for(int j = i*i; j <= N; j += i) {
                    Primes[j] = false;
                }
            }
        }
        vector<int> res;
        for(int i = 2; i < Primes.size(); i++) {
            if(Primes[i] == true) res.push_back(i);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends