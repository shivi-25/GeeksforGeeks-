#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        string s;
        for(int i=0;i<arr[0].size();++i)
        {
             for(int j=1;j<n;++j)
                 if(arr[j][i]!=arr[0][i])
                        {
                            if(s.size()==0)
                            return "-1";
                            else return s;
                        }
            s.push_back(arr[0][i]);            
        }
        return s;
    }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}
