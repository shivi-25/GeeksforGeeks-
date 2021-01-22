#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    map<char,int>m;
	    int ans=INT_MIN, cur=0, i=0;
	    while(i<s.size())
	    {
	        if(m.find(s[i])!=m.end())
	            {
	                ans=max(ans,cur);
	                cur=0;
	                i=m[s[i]]+1;
	                m.clear();
	            }
	           else {
	               cur++;
	               m[s[i]]=i;
	               i++;
	           } 
	    }
	    ans=max(ans,cur);
	    cout<<ans<<endl;
	}
	return 0;
}
