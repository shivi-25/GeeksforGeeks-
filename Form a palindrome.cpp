#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b;
	    cin>>a;
	    int n=a.size();
	    int dp[n+1][n+1];
	    b=a;
	    reverse(b.begin(),b.end());
	    for(int i=0;i<=n;++i)
	    for(int j=0;j<=n;++j)
	    {
	        if(i==0||j==0)
	        dp[i][j]=0;
	        else if(a[i-1]==b[j-1])
	        dp[i][j]=1+dp[i-1][j-1];
	        else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
	    }
	    cout<<n-dp[n][n]<<"\n";
	}
	return 0;
}
