#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
	    int n, k;
	    cin >> n >> k;
	    int grid[n][n];
	    int cnt = 0;
	    for(int i = 0; i < n; i++) {
	        for(int j = 0; j < n; j++) {
	            cin >> grid[i][j];
	            if(grid[i][j] == 1) cnt++;
	        } 
	    }
	    if(cnt - k > 0) cout << cnt - k << endl;
	    else cout << 0 << endl;
	    
	}
	return 0;
}