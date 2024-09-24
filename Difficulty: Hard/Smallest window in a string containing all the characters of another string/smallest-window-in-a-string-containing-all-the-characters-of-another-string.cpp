//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        vector<int> V(26);
        vector<int> curr(26);
        for(auto it : p) V[it - 'a']++;
        
        auto isVaild = [&]() {
            for(int i = 0; i < 26; i++) {
                if(V[i] > curr[i]) return false;
            }
            return true;
        };
        
        int n = s.length();
        int j = 0;
        int minLen = n + 2;
        int start = -1;
        for(int i = 0; i < n; i++)  {
            curr[s[i] - 'a']++;
            while(j <= i && isVaild()) {
                int currLen = i - j + 1;
                if(currLen < minLen) {
                    minLen = currLen;
                    start = i - minLen + 1;
                }
                curr[s[j++] - 'a']--;
            }
        }
        if(start == -1) return "-1";
        return s.substr(start, minLen);
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends