#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the subarray with given sum k
// arr: input array
// n: size of array
vector<int> subarraySum(int arr[], int n, int s){
    int sum=0,j=0;
    vector<int>ans;
    for(int i=0;i<n;++i)
    {
        sum+=arr[i];
        while(sum>s)
        {
            sum-=arr[j];
            j++;
        }
        if(sum==s)
        {
            ans.push_back(j+1);
            ans.push_back(i+1);
            break;
        }
    }
    if(ans.size()==0)
    ans.push_back(-1);
    return ans;
}

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int>res;
        res = subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
