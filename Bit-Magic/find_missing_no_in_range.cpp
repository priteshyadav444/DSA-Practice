#include <iostream>

using namespace std;

int solve(int arr[], int min, int max, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = min; i <= max; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
int main()
{
    int arr[] = {4, 5, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << solve(arr, 1, 5, size);
    return 0;
}