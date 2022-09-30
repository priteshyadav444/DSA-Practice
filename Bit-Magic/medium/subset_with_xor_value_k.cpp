// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
public:
    int dp[25][200];
    int rec(int i, int xr, int k,vector<int> v, int n)
    {
        if(i==n){
            if(xr==k) return 1;
            else return 0;
        }
        int ans = 0;
        if(dp[i][xr]!=-1) return dp[i][xr];
        int take = rec(i+1, xr^v[i], k, v, n);
        int leave = rec(i+1, xr, k, v, n);
        ans = take + leave;
        dp[i][xr] = ans;
        return ans;
    }
    int subsetXOR(vector<int> v, int N, int k) {
        memset(dp, -1, sizeof(dp));
        return rec(0, 0, k, v, N);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int K;
        cin>>K;
        vector<int> v;
        for(int i = 0;i<N;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }    
        Solution ob;
        cout << ob.subsetXOR(v,N,K) << endl;
    }
    return 0; 
}  // } Driver Code Ends