//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int maxXor(int arr[], int n)
    {
        int maxEle = INT_MIN;
        for (int i = 0; i < n; i++)
            maxEle = max(maxEle, arr[i]);

        int MSB = 0;
        for (int i = 31; i >= 0; --i)
            if (maxEle & (1 << i)){
                 MSB = i; break;
            }
               

        int idx = 0;
        
        for (int j = MSB; j >= 0; j--)
        {
            int currMaxEle = INT_MIN;
            int maxEleIdx = idx;
            
            for (int i = idx; i < n; i++)
            {
                if ((arr[i] & (1 << j)) && arr[i] > currMaxEle)
                {
                    currMaxEle = arr[i];
                    maxEleIdx = i;
                }
                    
            }

            if (currMaxEle == INT_MIN)
                continue;

            swap(arr[idx], arr[maxEleIdx]);
            maxEleIdx = idx;

            for (int i = 0; i < n; i++)
                if (i != maxEleIdx && (arr[i] & (1 << j)))
                    arr[i] ^= arr[maxEleIdx];

            idx++;
        }

        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res ^= arr[i];
        }
        return (maxEle, res);
    }
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

	   

	    Solution ob;
	    cout << ob.maxXor(a, n) << "\n";
   
    }
    return 0;
}

// } Driver Code Ends