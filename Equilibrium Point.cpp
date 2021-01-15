#include <iostream>
using namespace std;

// Position this line where user code will be pasted.

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        //calling equilibriumPoint() function
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n) {
    long long int l=a[0],r=a[n-1],i=0,j=n-1;
     while(i<j)
     {
        if(l==r)
        {
            i++;
            j--;
            l+=a[i];
            r+=a[j];
            if(i==j)
            return i+1;
        }
        else if(l>r)
        {
           j--;
           r+=a[j];
        }
        else {
            i++;
            l+=a[i];
        }
     }
     if(l==r && i==j)
     return i+1;
     return -1;
}
