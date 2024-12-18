#include <bits/stdc++.h>

using namespace std;
int secondLargestElement(vector<int> arr, int length)
{
    int secondLargestElement = -1;
    int largestElement = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (arr[i] > largestElement)
        {
            secondLargestElement = largestElement;
            largestElement = arr[i];
        }
        else if (arr[i] < largestElement && arr[i] > secondLargestElement)
        {
            secondLargestElement = arr[i];
        }
    }
    return secondLargestElement;
}
int main()
{
    vector<int> arr = {100, 97, 5, 4, 3, 1, 2, 101};
    cout << secondLargestElement(arr, 8);
    return 0;
}