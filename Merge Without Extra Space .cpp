#include <bits/stdc++.h> 
using namespace std; 
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int i=0, j=0, x=n;
            while(i<x && j<m)
            {
                if(arr1[i] > arr2[j])
                {
                    int y=j;
                    while(j<m && arr1[i] >  arr2[j])
                           j++;
                    for(int l=x-1, k=y;l>=i && k<j;++k,--l)
                       {swap(arr1[l], arr2[k]);
                       x--;}
                       
                }
                else i++;
            }
            sort(arr1, arr1+n);
            sort(arr2, arr2+m);
        } 
};
int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  
