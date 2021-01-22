#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{
public:
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        vector<vector<int>>ans;
        int s=0,l=-1;
        for(int i=1;i<n;++i)
        {
            if(A[i]<=A[s] && l==-1)
                s=i;
            else if(A[i]>A[s] && l==-1)
                 l=i;
            else if(A[i]>=A[l])
                 l=i;
            else if(A[i]<A[l])
                   {
                       vector<int>v;
                       v.push_back(s);
                       v.push_back(l);
                       ans.push_back(v);
                       s=i;
                       l=-1;
                   }
            
        }
        if(l!=-1)
        {
            vector<int>v;
            v.push_back(s);
            v.push_back(l);
            ans.push_back(v);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            for (int i=0; i<ans.size(); ++i){
                cout<<"("<<ans[i][0]<<" "<<ans[i][1]<<") ";
            }
        }cout<<endl;
    }
    return 0;
}
