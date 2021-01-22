#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    sort(s.begin(),s.end());
	    vector<string>v;
	    do
	    {
	        v.push_back(s);
	    }
	    while(next_permutation(s.begin(), s.end()));
	    for(int i=0;i<v.size();++i)
	    cout<<v[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
