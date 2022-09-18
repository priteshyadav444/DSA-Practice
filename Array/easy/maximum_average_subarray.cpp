// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMaxAverage(int a[], int n, int k) {
        
        int i = 0;
        int avg = INT_MIN;
        int ans = 0;
        
        if(n<=k) return 0;
        
        int sum = 0;
        for(i=0; i<k; i++)
            sum += a[i];

        avg = sum;
        for(i=k;i<n;i++)
        {
            int nidx = i - k;
            sum += a[i];
            sum -= a[nidx];
            if(avg < sum){ avg = sum; ans = ++nidx; }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxAverage(arr, n, k);
        for (int i = ans; i < ans + k; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends