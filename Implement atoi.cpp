#include <bits/stdc++.h>
using namespace std;

int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}// } Driver Code Ends


/*You are required to complete this method */
int atoi(string str)
{
    int t=0,s=0,f=0;
    if(str[0]=='-'||str[0]=='+')
        {
            if(str[0]=='-')
              f=1;
            s++;  
        }
    for(int i=s;i<str.size();++i)
    {
        if(str[i]>='0' && str[i]<='9')
        {int n=str[i]-'0';
        t=t*10+n;
        }
        else return -1;
    }
    if(f==1)
       t=t*(-1);    
    return t;
}
