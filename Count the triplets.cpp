#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    int ans=0,sum;
	    map<int,int>m;
	    for(int i=0;i<n;++i)
	    m[arr[i]]=i;
	    for(int i=0;i<n;++i)
	       for(int j=i+1;j<n;++j)
	       {
	           sum=arr[i]+arr[j];
	           if(m.find(sum)!=m.end())
	           {
	               if(m[sum]!= i && m[sum]!= j)
	                  ans++;
	           }
	       }
	       return ans;
	}
};

// { Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}  // } Driver Code Ends
