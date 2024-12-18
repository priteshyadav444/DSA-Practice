#include <bits/stdc++.h>

using namespace std;

int longestSubArrayBruteForceApproach(int arr[], int n, int K = 5)
{
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == K)
                ans = max(ans, j - i + 1);
        }
    }
    return ans;
}

int longestSubArrayBetterApproach(int arr[], int n, int K = 5)
{
    int ans = -1;
    long long sum = 0;
    map<long long, int> preSum;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == K)
        {
            ans = max(ans, i + 1);
        }

        if (preSum.find(sum - K) != preSum.end())
        {
            ans = max(ans, (i - preSum[sum - K]));
        }
        // if sum is not available in map than only add inside map. ( Reason : We want longest sub array)
        // if we update preSum with latest index it will greater than previous one thats why add only the first time only. to get the left most value
        if (preSum.find(sum) == preSum.end())
        {
            preSum[sum] = i;
        }
    }
    return ans;
}

int longestSubArrayOptimalApproach(int arr[], int n, int K = 7)
{
    int ans = -1;
    int left = 0;
    int right = 0;
    long long sum = arr[right];
    // Two pointer approach
    while (right < n)
    {
        while (left <= right && sum > K)
        {
            sum -= arr[left];
            left++;
        }

        if (sum == K)
        {
            ans = max(ans, right - left + 1);
        }

        right++;
        if (right < n)
        {
            sum += arr[right];
        }
    }
    return ans;
}

int main()
{
    int arr2[] = {1, 2, 3, 2, 4, 5, 6};
    cout << longestSubArrayOptimalApproach(arr2, 7, 7);

    return 0;
}