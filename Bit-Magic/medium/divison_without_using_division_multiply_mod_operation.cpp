//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long dd, long long dv) 
    {
        int sign = ((dd<0) ^ (dv<0)) ? -1 : 1;
        dd = abs(dd);
        dv = abs(dv);
        long long temp = 0;
        long long ans = 0;
        
        for(int i=31; i>=0; i--)
        {
            if(temp + (dv<<i) <= dd)
            {
                ans += (1LL<<i);
                temp +=  (dv<<i) ;
            }
        }
        if(sign==-1) ans = -ans;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}

// } Driver Code Ends