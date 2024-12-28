#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &a, int target)
    {
        vector<vector<int>> result;
        sort(a.begin(), a.end());
        int size = a.size();

        if (size < 4)
            return {};

        for (int i = 0; i < size - 3; i++)
        {
            if (i > 0 && a[i] == a[i - 1])
                continue; // Avoid duplicates for i

            for (int j = i + 1; j < size - 2; j++)
            {
                if (j > i + 1 && a[j] == a[j - 1])
                    continue; // Avoid duplicates for j

                int k = j + 1, l = size - 1;

                while (k < l)
                {
                    long long sum = a[i];
                    sum += a[j];
                    sum += a[k];
                    sum += a[l];

                    if (sum > target)
                    {
                        l--;
                    }
                    else if (sum < target)
                    {
                        k++;
                    }
                    else
                    {
                        result.push_back({a[i], a[j], a[k], a[l]});

                        k++;
                        l--;

                        while (k < l && a[k] == a[k - 1])
                            k++; // Skip duplicates for k
                        while (k < l && a[l] == a[l + 1])
                            l--; // Skip duplicates for l
                    }
                }
            }
        }

        return result;
    }
};

//{ Driver Code Starts.

int main()
{

    vector<int> arr = {1, 0, -1, 0, -2, 2};
    Solution obj;
    vector<vector<int>> ans = obj.FourSumOptimal(arr, 0);
    return 0;
}