class Solution {
  public:
    bool isValid(int i, int j, vector<vector<bool>>& vis, vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        return i < m && i >= 0 && j < n && j >= 0 && !vis[i][j] && grid[i][j] == 'O';
    }
    
    void dfs(vector<vector<char>>& grid, int i, int j, vector<vector<bool>>& vis) {
        vis[i][j] = true;
        
        if(isValid(i, j + 1, vis, grid)) dfs(grid, i, j + 1, vis);
        if(isValid(i + 1, j, vis, grid)) dfs(grid, i + 1, j, vis);
        if(isValid(i - 1, j, vis, grid)) dfs(grid, i - 1, j, vis);
        if(isValid(i, j - 1, vis, grid)) dfs(grid, i, j - 1, vis);
    }
    
    void fill(vector<vector<char>>& grid) {
        // Code here
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 'O' && (i == 0 || i == m-1 || j == 0 || j == n-1)) {
                    dfs(grid, i, j, vis);
                }
            }
        }
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 'O' && !vis[i][j]) {
                    grid[i][j] = 'X';
                }
            }
        }
    }
};