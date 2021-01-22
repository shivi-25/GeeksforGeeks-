#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string a, string b){
    if(a.size()!=b.size())
       return false;
    map<char,int>m1, m2;
    for(int i=0;i<a.size();++i)
        m1[a[i]]++;
    for(int i=0;i<a.size();++i)
        m2[b[i]]++;        
    for(int i=0;i<a.size();++i)
      if(m1[a[i]]!=m2[a[i]])
         return false;
    return true;
}
int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;

        if(isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
