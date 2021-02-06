#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        vector<long long>a,b;
        for(int i=0;i<n;++i)
            if(arr[i]%2==0)
                 a.push_back(arr[i]);
            else b.push_back(arr[i]);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0,j=b.size()-1;i<b.size();++i,--j)
             arr[i]=b[j];
        for(int i=b.size(),j=0;i<n;++i,++j)         
              arr[i]=a[j];
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
