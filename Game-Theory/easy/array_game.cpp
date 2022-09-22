//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string arrayGame(int N, int A[]) {
        int mx = INT_MIN;
        int sum = 0;
        
        for(int i=0; i<N; i++) mx = max(mx, A[i]);
        
        for(int i=0; i<N; i++) sum += (mx  - A[i]);
        
        if(sum==0) return "Draw";
        else if(sum%2) return "First";
        else return "Second";
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, i;
        cin >> N;
        int A[N];
        for (i = 0; i < N; i++) cin >> A[i];
        Solution ob;
        cout << ob.arrayGame(N, A) << "\n";
    }
}
// } Driver Code Ends