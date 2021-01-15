#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


int findPlatform(int arr[], int dep[], int n)
{
	vector<pair<int,int>>v(n);
	for(int i=0;i<n;++i)
	v[i]={arr[i], dep[i]};
	sort(v.begin(), v.end());
	vector<int>x;
	int ans=1;
	x.push_back(v[0].second);
	for(int i=1;i<n;++i)
	{
	    int f=0;
	    for(int j=0;j<ans;++j)
	       if(v[i].first > x[j])
	           {   x[j]=v[i].second;
	               f=1;break;}
	   if(f==0)
	      {x.push_back(v[i].second);
	      ans++;}
	}
	return ans;
}


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
           for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout <<findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
