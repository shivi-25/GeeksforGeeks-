#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool ispossible(int arr[], int n,int k,int min)
    {
        long long r=1, s=0;
        for(int i=0;i<n;++i)
         {
             if(arr[i]>min)
                return false;
            s+=arr[i];
            if(s>min)
            {
                r++;
                s=arr[i];
                if(r>k)
                return false;
            }
         }
         return true;
    }
    long long minTime(int arr[], int n, int k)
    {
       long long ans=INT_MAX, sum=0,start,end,mid;
       for(int i=0;i<n;++i)
           sum+=arr[i];
       start=0;
       end=sum;
       while(start<=end)
       {
           mid=(start+end)/2;
           if(ispossible(arr,n,k,mid))
             {
                 ans=min(ans, mid);
                 end=mid-1;
             }
           else start=mid+1;      
       }
       return ans;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
