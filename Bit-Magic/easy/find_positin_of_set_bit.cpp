// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int n) {
         int ans = 0;
         bool setbit = false;
         while(n!=0)
         {
             if((n&1)==1) { if(setbit){ return -1;}else{ ans++;} setbit=true;  }
             else { if(!setbit){ ans++; }}
             n = n>>1; 
         }
         if(ans==0) return -1;
         return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends