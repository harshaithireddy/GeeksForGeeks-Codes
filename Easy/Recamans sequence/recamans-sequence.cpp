//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        unordered_set<int> st;
        vector<int> res;
        int curr = 0;
        res.push_back(curr);
        st.insert(curr);
        
        for(int i = 1; i < n; i++) {
            int next = curr - i;
            if(next < 0 || st.find(next) != st.end()) {
                next = curr + i;
            }
            res.push_back(next);
            st.insert(next);
            curr = next;
        }
        return res;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends