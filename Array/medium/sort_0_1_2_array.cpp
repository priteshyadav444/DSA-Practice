#include <bits/stdc++.h>

using namespace std;
void sortArray(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
void printBeforeAfter(vector<int> arr, int length)
{
    cout << "Before sorting" << endl;
    for (int i = 0; i < length; i++)
        cout << arr[i] << ", ";

    cout << endl;
    sortArray(arr);

    cout << "After sorting" << endl;
    for (int i = 0; i < length; i++)
        cout << arr[i] << ", ";
}
int main()
{
    vector<int> arr = {1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 1, 2, 0, 0};
    printBeforeAfter(arr, arr.size());
    return 0;
}