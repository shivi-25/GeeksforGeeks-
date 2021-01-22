#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    map<int,int>m;
	    int d;
	    for(int i=0;i<n;++i)
	        m[arr[i]*arr[i]]=i;
	   for(int i=0;i<n;++i)
	      for(int j=i+1;j<n;++j)
	          {
	             d=arr[i]*arr[i] + arr[j]*arr[j];
	             if(m.find(d)!=m.end())
	             {
	                 if(m[d]!=i && m[d]!=j)
	                    return true;
	             }
	          }
	  return false;        
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
