//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        vector<int> V(26, -1);
        int res = 0;
        int start = 0;
        for(int i = 0; i < S.size(); i++) {
            int ind = S[i] - 'a';
            if(V[ind] >= start) {
                start = V[ind] + 1;
            } 
            V[ind] = i;
            res = max(res, i - start + 1);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends