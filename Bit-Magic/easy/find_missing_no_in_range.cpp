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

int findMissingNumberOptimal(int arr[], int min, int max, int n)
{
    int startingIndex = 0;
    int XOR1 = 0;
    int XOR2 = 0;
    for (int i = min; i <= max; i++)
    {
        XOR1 = XOR1 ^ i;
        if (startingIndex <  max - min)
        {
            XOR2 = XOR2 ^ arr[startingIndex];
            startingIndex++;
        }
    }
    return XOR1 ^ XOR2;
}
int main()
{
    int arr[] = {4, 5, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findMissingNumberOptimal(arr, 1, 5, size);
    return 0;
}