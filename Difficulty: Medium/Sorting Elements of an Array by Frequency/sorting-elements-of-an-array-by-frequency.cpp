//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        map<int, int> mpp;
        vector<int> res;
        
        for(int i = 0; i < n; i++) mpp[arr[i]]++;
        
        vector<pair<int, int>> V;
        for(auto it : mpp) V.push_back({it.first, it.second});
        
        auto compare = [&](pair<int, int> a, pair<int, int> b) {
            if(a.second == b.second) return a.first < b.first;
            return a.second > b.second;
        };
        sort(V.begin(), V.end(), compare);
        for(auto it: V) {
            for(int i = 0; i < it.second; i++) res.push_back(it.first);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends