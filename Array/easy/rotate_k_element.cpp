#include <bits/stdc++.h>

using namespace std;
void reverseArray(int arr[], int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotateByKElement(int arr[], int length, int K)
{
    reverseArray(arr, 0, K - 1);
    reverseArray(arr, K, length - 1);
    reverseArray(arr, 0, length - 1);
}
void rotateByKElementExample(int arr[], int length, int K)
{
    cout << "Before sorting" << endl;
    for (int i = 0; i < length; i++)
        cout << arr[i] << ", ";

    cout << endl;
    rotateByKElement(arr, length, K);

    cout << "After sorting" << endl;
    for (int i = 0; i < length; i++)
        cout << arr[i] << ", ";
}

int main()
{
    int arr[] = {100, 97, 5, 400, 3, 1, 2, 101};
    rotateByKElementExample(arr, 8, 2);
    return 0;
}