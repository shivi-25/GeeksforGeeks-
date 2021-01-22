#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    map<char,int>m;
	    string ans;
	    for(int i=0;i<S.size();++i)
	        m[S[i]]++;
	    for(int i=S.size()-1;i>=0;--i)
	        {if(m[S[i]]==1)
	           ans.push_back(S[i]);
	         m[S[i]]--;} 
	   reverse(ans.begin(),ans.end());      
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
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
