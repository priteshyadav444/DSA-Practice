// { Driver Code Starts
// C++ program to find number 
// of pairs in an array such
// that their XOR is 0
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the
// count
long long int calculate(int a[], int n);

// Driver Code
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	  int n;
	  cin>>n;
	  int arr[n+1];
	  for( int i=0;i<n;i++)
	        cin>>arr[i];
	    cout << calculate(arr, n)<<endl;
        
	}
	return 0;
}

// } Driver Code Ends

const int N = 1e5;

long long int calculate(int a[], int n)
{
    unordered_map <int,int> up;
    long long int ans = 0;
    for(int i=0; i<n; i++)
        up[a[i]]++;
    
    for(auto ele: up)
        ans += ((ele.second-1) * (ele.second)) / 2;
    
    return ans;
    
}
