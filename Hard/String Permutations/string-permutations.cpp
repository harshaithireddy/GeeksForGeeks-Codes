//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void Permutations(string s, int start, int end, vector<string>& res) {
        if(start >= end) {
            res.push_back(s);
            return;
        }
        for(int i = start; i <= end; i++) {
            swap(s[start], s[i]);
            Permutations(s, start+1, end, res);
            swap(s[start], s[i]);
        }
    }
    
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> res;
        Permutations(S, 0, S.size()-1, res);
        sort(res.begin(), res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends