#include <bits/stdc++.h>

using namespace std;

int longestSubConsecutiveBruteForceApproach(int arr[], int n)
{
    int ans = 1;
    int cnt = 0;
    int lastSmaller = INT_MIN;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == lastSmaller)
        {
            cnt++;
            lastSmaller = arr[i];
        }
        else if (arr[i] != lastSmaller)
        {
            cnt = 1;
            lastSmaller = arr[i];
        }
        ans = max(ans, cnt);
    }
    return ans;
}

int longestSubConsecutiveBetterApproach(int arr[], int n)
{
    int ans = 1;
    unordered_set<int> us;
    for (int i = 0; i < n; i++)
    {
        us.insert(arr[i]);
    }

    for (auto it : us)
    {
        if (us.find(it - 1) == us.end())
        {
            int x = it + 1;
            int cnt = 1;
            while (us.find(x) != us.end())
            {
                cnt++;
                x++;
            }
            ans = max(cnt, ans);
        }
    }
    return ans;
}

int main()
{
    int arr2[] = {102, 4, 100, 1, 2, 101, 3};
    cout << longestSubConsecutiveBetterApproach(arr2, 7);
    return 0;
}