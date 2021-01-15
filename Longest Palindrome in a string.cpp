#include <bits/stdc++.h>
using namespace std;
void fun(string s, int &k,int &l,int &m,int i,int j)
{
     while(i>=0 && j<s.size())
	      {
	        if(s[i]!=s[j])
	           return;
	        if(l==-1)
	        {
	            k=i;
	            l=j;
	            m=j-i;
	        }
	        else if(j-i > m)
	        {
	            k=i;
	            l=j;
	            m=j-i;
	        }
	        i--;j++;
	      }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int m=INT_MIN,k=-1,l=-1;
	    for(int i=0;i<s.size();++i)
	        fun(s,k,l,m,i,i+1);
	    for(int i=0;i<s.size();++i)
	        fun(s,k,l,m,i,i+2);
	    if(k==-1)
	       cout<<s[0];
	    else for(int i=k;i<=l;++i)
	             cout<<s[i];
	    cout<<endl;
	}
	return 0;
}
