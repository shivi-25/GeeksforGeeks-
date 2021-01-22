#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


   

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){

    int a1[n], a2[n];
    a1[0]=arr[0];
    for(int i=1;i<n;++i)
    a1[i]=max(a1[i-1], arr[i]);
    a2[n-1]=arr[n-1];
    for(int i=n-2;i>=0;--i)
    a2[i]=max(a2[i+1], arr[i]);
    int ans=0;
    for(int i=0;i<n;++i)
     ans+=min(a1[i], a2[i])- arr[i];
     return ans;
    
}

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        //calling trappingWater() function
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
