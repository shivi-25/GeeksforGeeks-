#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b)
{
    return (stoi(a+b) > stoi(b+a));
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<string>v(n,"");
	    for(int i=0;i<n;++i)
	    cin>>v[i];
	    sort(v.begin(),v.end(),compare);
	    for(int i=0;i<n;++i)
	    cout<<v[i];
	    cout<<"\n";
	}
	return 0;
}
