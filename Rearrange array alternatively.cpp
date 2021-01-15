#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// This function wants you to modify the given input
// array and no need to return anything
// arr: input array
// n: size of array
void rearrange(long long *arr, int n) 
{ 
	long long a[n];
	for(int i=0;i<n;++i)
	a[i]=arr[i];
	int i=0,j=n-1,k=0;
	while(i<j)
	{
	    arr[k]=a[j];
	    j--;
	    k++;
	    arr[k]=a[i];
	    i++;
	    k++;
	}
	if(i==j)
	arr[k]=a[i];
}

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        //calling rearrange() function
        rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
}
