#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
    void change(vector<vector<int>>& grid, int i,int j,int k)
    {
        int r=grid.size(), c=grid[0].size();
        if(i-1>=0 &&grid[i-1][j]==1)
           grid[i-1][j]=k;
        if(i+1<r &&grid[i+1][j]==1)
           grid[i+1][j]=k;
        if(j-1>=0 &&grid[i][j-1]==1)
           grid[i][j-1]=k;
        if(j+1<c &&grid[i][j+1]==1)
           grid[i][j+1]=k;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int f=0,k=2,ans=0;
        for(int i=0;i<grid.size();++i)
                for(int j=0;j<grid[0].size();++j)
                    if(grid[i][j]==1)
                         f=1;
        if(f==0)
          return 0;
        while(f==1)
        {
            f=0;
            for(int i=0;i<grid.size();++i)
                for(int j=0;j<grid[0].size();++j)
                     if(grid[i][j]==k)
                         change(grid,i,j,k+1);
                         
                         
            ans++;
            for(int i=0;i<grid.size();++i)
                for(int j=0;j<grid[0].size();++j)
                    if(grid[i][j]==1)
                         f=1;
            k++;            
        }
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
