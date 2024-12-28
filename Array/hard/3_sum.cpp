#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    vector<int> ThreeSumBrute(int a[], int size, int tripletSum)
    {
        int currentSum = 0;
        vector<int> ans;
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size - 1; j++)
            {
                for (int k = j + 1; k < size - 2; k++)
                {
                    if ((a[i] + a[j] + a[k]) == tripletSum)
                    {
                        ans.push_back(i);
                        ans.push_back(j);
                        ans.push_back(k);
                        break;
                    }
                }
                if (ans.size() > 0)
                {
                    break;
                }
            }
            if (ans.size() > 0)
            {
                break;
            }
        }
        return ans;
    }

    vector<vector<int>> ThreeSumBetter(int a[], int size, int tripletSum)
    {
        int currentSum = 0;
        set<vector<int>> ans;
        for (int i = 0; i < size; i++)
        {
            set<int> hasSet;
            for (int j = i + 1; j < size - 1; j++)
            {
                for (int k = j + 1; k < size - 2; k++)
                {
                    int third = -(a[i] - a[j]);
                    if (hasSet.find(third) != hasSet.end())
                    {
                        vector<int> temp;
                        temp.push_back(a[i]);
                        temp.push_back(a[j]);
                        temp.push_back(a[k]);
                        sort(temp.begin(), temp.end());
                        ans.insert(temp);
                    }
                    hasSet.insert(a[k]);
                }
            }
        }
        vector<vector<int>> result(ans.begin(), ans.end());
        return result;
    }

    vector<vector<int>> ThreeSumOptimal(vector<int> a, int size, int tripletSum)
    {
        vector<vector<int>> result;
        sort(a.begin(), a.end());
        int size = a.size();
        for (int i = 0; i < size; i++)
        {
            if (i > 0 && a[i] == a[i - 1])
                continue;

            int j = i + 1;
            int k = size - 1;
            while (j < k)
            {
                int tripLetSum = a[i] + a[j] + a[k];
                if (tripLetSum > 0)
                {
                    k--;
                }
                else if (tripLetSum < 0)
                {
                    j++;
                }
                else
                {
                    vector<int> temp = {a[i], a[j], a[k]};
                    result.push_back(temp);
                    j++;
                    k--;
                    while (a[j - 1] == a[j] && j < k)
                        j++;

                    while (a[k + 1] == a[k] && j < k)
                        k--;
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