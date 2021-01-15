#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s,t;
	    cin>>s;
	    int i,x=1,f;
	    while(x==1)
	    {
	        i=0;
	        x=0;
	        while(i<s.size())
	    {
	        f=0;
	        while(i+1<s.size() && s[i]==s[i+1])
	         {i++;
	          f=1;
	          x=1;      
	         }
	         if(f==0)
	           t.push_back(s[i]);
	          i++; 
	    }
	    s=t;
	    t.clear();
	    }
	    cout<<s<<endl;
	}
	return 0;
}
