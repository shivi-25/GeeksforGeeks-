#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/
bool dfs(vector<int>adj[], vector<int>&vis, vector<int>&s,int u)
{
    if(vis[u]==0)
    {vis[u]=1;
     s[u]=1;
    for(auto i:adj[u])
    {
        if(vis[i]==0 && dfs(adj,vis,s,i))
            return true;
        else if(s[i]==1)
             return true;
    }
    }
    s[u]=0;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    vector<int>vis(V,0);
    vector<int>s(V,0);
    for(int i=0;i<V;++i)
    {
        if(vis[i]==0 && dfs(adj, vis, s, i))
        return true;
    }
    return false;
}

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
