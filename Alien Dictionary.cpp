#include <bits/stdc++.h>

using namespace std;

string findOrder(string[], int, int);
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s[n];
        for (int i = 0; i < n; i++) cin >> s[i];

        string ss = findOrder(s, n, k);
        order = "";
        for (int i = 0; i < ss.size(); i++) order += ss[i];

        string temp[n];
        std::copy(s, s + n, temp);
        sort(temp, temp + n, f);

        bool f = true;
        for (int i = 0; i < n; i++)
            if (s[i] != temp[i]) f = false;

        cout << f;
        cout << endl;
    }
    return 0;
}
void dfs(unordered_set<int>adj[], vector<int>&vis, int i, string &ans)
{
    vis[i]=1;
    for(auto j:adj[i])
    {
        if(vis[j]==0)
        dfs(adj,vis,j,ans);
    }
    ans.push_back(char(i)+'a');
}
string findOrder(string dict[], int N, int K) {
   unordered_set<int> adj[K];
   for(int i=0;i<N-1;++i)
   for(int j=0;j< min(dict[i].size(), dict[i+1].size());++j)
   if(dict[i][j]!=dict[i+1][j])
   {
       adj[dict[i][j]-'a'].insert(dict[i+1][j]-'a');
       break;
   }
   vector<int>vis(K,0);
   string ans;
   for(int i=0;i<K;++i)
   if(vis[i]==0)
   dfs(adj,vis,i,ans);
   reverse(ans.begin(),ans.end());
   return ans;
}
