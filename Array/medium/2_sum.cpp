#include <bits/stdc++.h>

using namespace std;
bool hasTwoSum(vector<int> arr, int sum)
{
    map<int, int> mpp;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        int more = sum - arr[i];
        if (mpp.find(more) != mpp.end())
        {
            return true;
        }
        mpp[arr[i]] = i;
    }

    return false;
}

bool hasTwoSumBySorting(vector<int> arr, int twoSum)
{
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = arr.size() - 1;
    int sum = arr[left] + arr[right];
    while (sum != twoSum && left < right)
    {
        cout<<sum<<endl;
        if (sum < twoSum)
        {
            left++;
        }
        else
        {
            right--;
        }
        sum = arr[left] + arr[right];
    }

    if (sum == twoSum)
    {
        return true;
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 4, 7, 8, 2};
    if (hasTwoSumBySorting(arr, 12))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}