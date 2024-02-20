//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string> V;
        string str = "";
        for(int i = 0; i < S.size(); i++) {
            if(S[i] != '.') {
                str += S[i];
            }
            else {
                V.push_back(str);
                str = "";
            }
        }
        V.push_back(str);
        
        string res;
        for(int i = 0; i < V.size(); i++) {
            res = V[i] + "." + res; 
        }
        res.erase(res.size()-1);
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
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends