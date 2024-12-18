//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    vector<int> leader(int a[], int size)
    {

        vector<int> ans;
        int maxElement = INT_MIN;

        for (int i = size - 1; i >= 0; i--)
        {
            if (a[i] > maxElement)
            {
                ans.push_back(a[i]);
            }
            maxElement = max(maxElement, a[i]);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{

    int arr[] = {2, 2, 1, 2, 2, 3, 1, 1, 2, 1, 1};
    Solution ob;
    vector<int> ans = ob.leader(arr, 11);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << ", ";
    return 0;
}