//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
        int i = 0;
        int res = 0;
    
        while(i < str.size()) {
            while(i < str.size() && !isdigit(str[i])) {
                i++;
            }
    
            string num = "";
            while (i < str.size() && isdigit(str[i])) {
                num += str[i];
                i++;
            }
    
            if(!num.empty()) {
                res += stoi(num);
            }
        }
    
        return res;
    } 
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends