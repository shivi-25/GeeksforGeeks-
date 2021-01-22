#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > m, int r, int c) 
    {
        vector<int>ans;
        int i,j,k=0;
        while(ans.size() < (r*c))
        {
            i=k;
            for(j=k;j<c-k;++j)
                ans.push_back(m[i][j]);
            if(ans.size()==(r*c))
               break;
            j=c-1-k;
            i++;
            for(;i<r-k;++i)
               ans.push_back(m[i][j]);
            if(ans.size()==(r*c))
               break;   
            i=r-1-k;
            for(j=c-2-k;j>=k;--j)
                ans.push_back(m[i][j]);
            if(ans.size()==(r*c))
               break;        
            j=k;
            for(i=r-2-k;i>k;--i)
               ans.push_back(m[i][j]);
            if(ans.size()==(r*c))
               break;   
            k++;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
