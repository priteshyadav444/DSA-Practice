//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {

        long long ans = INT_MIN;
        if (n == 0)
            return 0;
        if (n == 1)
            return arr[0];
        int csum = 0;

        for (int i = 0; i < n; i++)
        {
            csum += arr[i];
            if (csum > ans)
            {
                ans = csum;
            }
            else if(csum < 0)
            {
                csum = 0;
            }
        }
        return ans;
    }

    int maxSubarraySumByBruteForceApproach(int arr[], int n)
    {
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int sum = 0;
                for (int k = i; k < j; k++)
                {
                    sum += arr[k];
                    ans = max(sum, ans);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t, n;

    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    Solution obj;
    cout << obj.maxSubarraySum(arr, 8) << endl;
}
