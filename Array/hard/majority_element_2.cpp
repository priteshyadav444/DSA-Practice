#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    vector<int> majorityElementOptimalWay(int a[], int size)
    {

        int cnt1 = 0, ele1 = INT_MIN;
        int cnt2 = 0, ele2 = INT_MIN;
        for (int i = 0; i < size; i++)
        {
            if (cnt1 == 0 && a[i] != ele2)
            {
                ele1 = a[i];
                cnt1 = 1;
            }
            else if (cnt2 == 0 && a[i] != ele1)
            {
                ele2 = a[i];
                cnt2 = 1;
            }
            else if (a[i] == ele1)
            {
                cnt1++;
            }
            else if (a[i] == ele2)
            {
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for (int i = 0; i < size; i++)
        {
            if (a[i] == ele1)
            {
                cnt1++;
            }

            if (a[i] == ele2)
            {
                cnt2++;
            }
        }
        int mini = (int)(size / 3) + 1;
        vector<int> ans;
        if (cnt1 >= mini)
            ans.push_back(ele1);
        if (cnt2 >= mini && ele1 != ele2)
            ans.push_back(ele2);

        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{

    int arr[] = {2, 2, 1, 3, 1, 1, 3, 1, 1};
    Solution obj;
    vector<int> ans = obj.majorityElementOptimalWay(arr, 9);
    cout << ans[0];
    return 0;
}