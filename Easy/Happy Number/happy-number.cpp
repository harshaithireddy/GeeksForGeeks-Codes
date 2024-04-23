//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int sumN(int N) {
        int rem;
        int sum = 0;
        while(N != 0) {
            rem = N % 10;
            sum += (rem * rem);
            N /= 10;
        }
        return sum;
    }
    int isHappy(int N){
        // code here
        if(N == 1) return 1;
        set<int> st;
        
        while(N != 1) {
            N = sumN(N);
            if(st.find(N) != st.end()) return 0;
            else st.insert(N);
            
            if(N == 1) return 1;
        }
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
        cin>>N;
        Solution ob;
        cout << ob.isHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends