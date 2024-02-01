//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    private:
    void Generate(vector<string>& ans, int close, int open, string s, int n) {
        if(open == 0 && close == 0) {
            ans.push_back(s);
            return;
        }
        if(open != 0) Generate(ans, close, open-1, s+'(', n);
        if(close > open) Generate(ans, close-1, open, s+')', n);
    }
    public:
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here
        int open = n;
        int close = n;
        vector<string> ans;
        Generate(ans, open, close, "", n);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends