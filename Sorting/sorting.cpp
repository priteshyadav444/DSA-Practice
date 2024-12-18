#include <bits/stdc++.h>
using namespace std;

int selectingSort(int arr[], int length)
{
    cout << "Before sorting" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " " << endl;
    }

    int minValueIndex = 0;
    for (int i = 0; i < length - 1; i++)
    {
        minValueIndex = i;
        for (int j = i + 1; j < length; j++)
            if (arr[minValueIndex] > arr[j])
                minValueIndex = j;

        if (i != minValueIndex)
            swap(arr[i], arr[minValueIndex]);
    }

    cout << "After sorting" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " " << endl;
    }
}

void bubbleSort(int arr[], int length)
{
    cout << "Before sorting" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " " << endl;
    }

    // for (int i = 0; i < length - 1; i++)
    // {
    //     for (int j = 0; j < length - i; j++)
    //         if (arr[j] > arr[j + 1])
    //             swap(arr[j], arr[j + 1]);
    // }

    for (int i = length - 1; i >= 0; i--)
    {
        bool didSwap = false;
        for (int j = 0; j < i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = true;
            }
        }

        if (didSwap)
        {
            cout << i << endl;
            break;
        }
    }

    cout << "After sorting" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " " << endl;
    }
}

int insertionSort(int arr[], int length)
{
    cout << "Before sorting" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " " << endl;
    }

    for (int i = 0; i < length - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }

    cout << "After sorting" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " " << endl;
    }
}
// void mergeArray(vector<int> &arr, int start, int mid, int end)
// {
//     vector<int> temp;
//     int left = start;
//     int right = mid + 1;

//     while (left <= mid && right <= end)
//     {
//         if (arr[left] > arr[right])
//         {
//             temp.push_back(arr[right]);
//             right++;
//         }
//         else
//         {
//             temp.push_back(arr[left]);
//             left++;
//         }
//     }

//     while (left <= mid)
//     {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     while (right <= end)
//     {
//         temp.push_back(arr[left]);
//         right++;
//     }

//     for (int i = start; i <= end; i++)
//     {
//         arr[i] = temp[i - start];
//     }
// }
// void mergeSort(vector<int> &arr, int start, int end)
// {
//     if (start >= end)
//         return;

//     int mid = (start + end) / 2;

//     mergeSort(arr, start, mid);
//     mergeSort(arr, mid + 1, end);

//     mergeArray(arr, start, mid, end);
// }

void mergerArray(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int leftStart = start;
    int rightStart = mid + 1;

    while (leftStart <= mid && rightStart <= end)
    {
        if (arr[leftStart] < arr[rightStart])
        {
            temp.push_back(arr[leftStart]);
            leftStart++;
        }
        else
        {
            temp.push_back(arr[rightStart]);
            rightStart++;
        }
    }

    while (leftStart <= mid)
    {
        temp.push_back(arr[leftStart]);
        leftStart++;
    }

    while (rightStart <= end)
    {
        temp.push_back(arr[rightStart]);
        rightStart++;
    }

    for (int i = start; i < end; i++)
    {
        arr[i] = temp[i - start];
    }
}
void mergeSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;

    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    mergerArray(arr, start, mid, end);
}
void mergeSortExample(vector<int> &arr, int length)
{
    cout << "Before sorting" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " " << endl;
    }

    mergeSort(arr, 0, length - 1);

    cout << "After sorting" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " " << endl;
    }
}

void recursiveBubbleSort(int arr[], int n)
{
    if (n <= 2)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    recursiveBubbleSort(arr, n - 1);
}

void recursiveExample(int arr[], int length)
{
    cout << "Before sorting" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << endl;

    recursiveBubbleSort(arr, length);

    cout << "After sorting" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << ", ";
    }
}

// int partitioner(vector<int> &arr, int low, int high)
// {
//     int pivot = arr[low];
//     int start = low;
//     int end = high;

//     while (start < end)
//     {
//         while (start < high && pivot >= arr[start])
//             start++;

//         while (end > low && pivot < arr[end])
//             end--;

//         if (start < end)
//             swap(arr[start], arr[end]);
//     }

//     swap(arr[low], arr[end]);
//     return end;
// }
// void quickSort(vector<int> &arr, int start, int end)
// {
//     if (start >= end)
//         return;

//     int partionIndex = partitioner(arr, start, end);
//     quickSort(arr, start, partionIndex - 1);
//     quickSort(arr, partionIndex + 1, end);
// }
int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[start];
    int low = start;
    int high = end;

    while (low < high)
    {
        while (low < end && arr[low] <= pivot)
            low++;

        while (high > start && arr[high] >= pivot)
            high--;

        if (low < high)
            swap(arr[low], arr[high]);
    }

    swap(arr[start], arr[high]);
    return high;
}
void quickSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;

    int partitionIndex = partition(arr, start, end);
    quickSort(arr, start, partitionIndex - 1);
    quickSort(arr, partitionIndex + 1, end);
}
void quickSortExample(vector<int> &arr, int length)
{
    cout << "Before sorting" << endl;
    for (int i = 0; i < length; i++)
        cout << arr[i] << ", ";

    cout << endl;
    quickSort(arr, 0, length - 1);

    cout << "After sorting" << endl;
    for (int i = 0; i < length; i++)
        cout << arr[i] << ", ";
}

int main()
{
    vector<int> arr = {100, 97, 5, 4, 3, 1, 2, 101};
    // int arr[] = {100, 97, 5, 400, 3, 1, 2, 101};
    quickSortExample(arr, 8);
    return 0;
}