#include <bits/stdc++.h>

using namespace std;
vector<int> nextPermutation(vector<int> arr)
{
    int breakIndex = -1;
    int length = arr.size();

    // 1) Find the break earlier element is greater than second one
    for (int i = length - 1; i > 0; i--)
    {
        if (arr[i - 1] < arr[i])
        {
            breakIndex = i - 1;
            break;
        }
    }

    if (breakIndex == -1)
    {
        reverse(arr.begin(), arr.end());
        return arr;
    }

    for (int i = length - 1; i > breakIndex; i--)
    {
        // 2) Get the slightly greater than reverse with break element
        if (arr[breakIndex] < arr[i])
        {
            swap(arr[breakIndex], arr[i]);
            break;
        }
    }

    // reverse remaining element
    reverse(arr.begin() + breakIndex + 1, arr.end());
    return arr;
}
int main()
{
    vector<int> arr = {2, 3, 5, 4, 1, 0, 0};
    vector<int> res = nextPermutation(arr);

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << ", " << endl;
    return 0;
}