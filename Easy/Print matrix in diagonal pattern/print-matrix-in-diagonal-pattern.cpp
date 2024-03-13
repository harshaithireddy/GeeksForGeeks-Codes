//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         int n = mat.size();
         int m = mat[0].size();
         
         vector<int> res(n * m);
         
         int row = 0;
         int col = 0;
         int i = 0;
         
         bool up = true;
         
         while(row < m && col < n) {
             if(up == true) {
                 while(row > 0 && col < n - 1) {
                     res[i++] = mat[row][col];
                     row--;
                     col++;
                 }
                 res[i++] = mat[row][col];
                 if(col == n - 1) row++;
                 else col++;
             }
             else {
                 while(row < m-1 && col > 0) {
                     res[i++] = mat[row][col];
                     row++;
                     col--;
                 }
                 res[i++] = mat[row][col];
                 if(row == m-1) col++;
                 else row++;
             }
             up = !up;
         }
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
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends