//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char, int> mpp;
        for(int i = 0; i < s.size(); i++) {
            mpp[s[i]]++;
        }
        int sum = 0;
        if(k == 0) {
            for(auto it : mpp) {
                sum += (it.second * it.second);
            }
        }
        else {
            priority_queue<pair<int, char>> pq;
            for(auto it : mpp) {
                pq.emplace(it.second, it.first);
            }
            
            while(!pq.empty()) {
                pair<int, char> x = pq.top();
                pq.pop();
                if(k > 0) {
                    x.first -= 1;
                    pq.push(x);
                    k--;
                }
                if(k == 0) break;
            }
            
            sum = 0;
            while(!pq.empty()) {
                pair<int,char> x = pq.top();
                sum += (x.first * x.first);
                pq.pop();
            }
        }
        return sum;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends