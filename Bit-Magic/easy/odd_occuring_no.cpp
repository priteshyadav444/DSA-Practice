#include <iostream>

using namespace std;

int solve(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {4, 3, 4, 4, 4, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << solve(arr, size);
    return 0;
}