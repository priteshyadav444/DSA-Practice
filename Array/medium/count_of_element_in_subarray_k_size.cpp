//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int cout_of_subarrays(vector<int> arr, int n, int k)
    {
        map<int, int> mpp;
        int i = 0;
        int ans = 0;
        mpp[0] = 1;
        int preSum = 0;
        for (i = 0; i < n; i++)
        {
            preSum += arr[i];
            int rem = preSum - k;
            ans += mpp[rem];
            mpp[preSum] += 1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    Solution ob;
    vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int n = arr.size();
    int k = 3;
    int res = ob.cout_of_subarrays(arr, n, k);
    cout << res;
    return 0;
}
// } Driver Code Ends