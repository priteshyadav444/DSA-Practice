//{ Driver Code Starts
// C++ implementation of For each element in 1st
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
class Solution
{
public:
    // Using linear Search O(n^2)
    vector<int> countEleLessThanOrEqual_1(int arr1[], int arr2[],
                                          int m, int n)
    {
        // vector <int> ans;
        sort(arr2, arr2 + n);
        vector<int> ans;

        for (int i = 0; i < m; i++)
        {
            bool is_calculated = true;
            for (int j = n - 1; j >= 0; j--)
            {
                if (arr1[i] >= arr2[j])
                {
                    ans.push_back(j + 1);
                    is_calculated = false;
                    break;
                }
            }
            if (is_calculated)
                ans.push_back(0);
        }
        return ans;
    }
    // binary Search
    int find(int arr[], int size, int key)
    {
        int l = 0;
        int mid = 0;
        int h = size - 1;
        int ans = -1;
        while (l <= h)
        {
            mid = (l + h) / 2;
            if (arr[mid] <= key)
            {
                l = mid + 1;
                ans = mid;
            }
            else
            {
                h = mid - 1;
            }
        }
        return ans;
    }
    // using binary search O(logN)
    vector<int> countEleLessThanOrEqual_2(int arr1[], int arr2[],
                                          int m, int n)
    {
        sort(arr2, arr2 + n);
        vector<int> ans;

        for (int i = 0; i < m; i++)
        {
            if (arr2[n - 1] <= arr1[i])
            {
                ans.push_back(n);
            }
            else
            {
                int no_of_element = find(arr2, n, arr1[i]);
                no_of_element != -1 ? ans.push_back(no_of_element + 1) : ans.push_back(0);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int arr1[m], arr2[n];
        for (int i = 0; i < m; i++)
            cin >> arr1[i];
        for (int j = 0; j < n; j++)
            cin >> arr2[j];
        Solution obj;
        vector<int> res = obj.countEleLessThanOrEqual_2(arr1, arr2, m, n);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";

        cout << endl;
    }
    return 0;
}
// } Driver Code Ends