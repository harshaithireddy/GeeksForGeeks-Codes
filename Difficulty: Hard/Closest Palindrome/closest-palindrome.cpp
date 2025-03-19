//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    long long int generate(long long int n, int i) {
        long long int p = n;
        if(i) n /= 10;
        while(n) {
            p = p * 10 + (n % 10);
            n /= 10;
        }
        return p;
    }
    
	long long int closestPalindrome(long long int num){
	    // Code here
	    if(num <= 9) return num;
	    string s = to_string(num);
	    int n = s.size();
	    
	    string left = s.substr(0, ((n + 1) / 2));
	    long long int res = generate(stoll(left), n % 2);
	    vector<long long int> V;
	    
	    V.push_back(generate(stoll(left) + 1, 0));
	    V.push_back(generate(stoll(left) + 1, 1));
	    V.push_back(generate(stoll(left) - 1, 0));
	    V.push_back(generate(stoll(left) - 1, 1));
	    
	    for(auto it : V) {
	        if(abs(num - res) > abs(num - it)) res = it;
	        else if(abs(num - res) == abs(num - it)) res = min(res, it);
	    }
	    return res;
	}

};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int num;
		cin >> num;
		Solution obj;
		long long int ans = obj.closestPalindrome(num);
		cout << ans <<"\n";
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends