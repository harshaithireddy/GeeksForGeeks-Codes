//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int n, m;
    bool isValid(int row, int col){
        return row >= 0 && row < n && col >= 0 && col < m;
    }

    void dfs(int row, int col , vector<vector<char>>& grid, vector<vector<int>>& vis) {
        vis[row][col] = 1;
        
        for(int i = -1; i <= 1; i++) {
            for(int j = -1;j <= 1; j++) {
                int nrow = row + i;
                int ncol = col + j;
                if(isValid(nrow, ncol) && !vis[nrow][ncol] && grid[nrow][ncol] == '1') {
                    dfs(nrow, ncol, grid, vis);
                }
            }
        }
    }
    
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size(), m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m));
        int islands = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0;j < m; j++) {
                if(grid[i][j] == '1' && !vis[i][j]) {
                    islands++;
                    dfs(i, j, grid, vis);
                }
            }
        }
        return islands;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends