// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
public:
    int subsetXOR(vector<int> v, int N, int k) {
        unordered_map <int, int> mp;
           mp[0]=1;
        int cnt = 0;
        int xr = 0;
        
        for(int i=0; i<N; i++)
        {
            xr = (xr ^ v[i]);
            if(xr == k) cnt++;
        
            if(mp.find(xr^k)!=mp.end()) cnt += mp[xr^k];
            
            mp[xr] += 1;
        }
        return cnt;
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