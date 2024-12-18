#include <bits/stdc++.h>
using namespace std;

void moveZerosToEnd(int arr[], int length)
{
    int zeroElementIndex = -1;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == 0)
        {
            zeroElementIndex = i;
            break;
        }
    }

    if (zeroElementIndex == -1)
        return;

    for (int i = zeroElementIndex + 1; i < length; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[zeroElementIndex]);
            // zeroElementIndex will also point on first zero value element index
            zeroElementIndex++;
        }
    }
}

void moveZerosToEndExample(int arr[], int length)
{
    cout << "Before sorting" << endl;
    for (int i = 0; i < length; i++)
        cout << arr[i] << ", ";

    cout << endl;
    moveZerosToEnd(arr, length);

    cout << "After sorting" << endl;
    for (int i = 0; i < length; i++)
        cout << arr[i] << ", ";
}
int main()
{
    int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    moveZerosToEndExample(arr, 10);
    return 0;
}