#include <bits/stdc++.h>

using namespace std;
void reArrangeArrayBrute(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;
    vector<int> positive;
    vector<int> negative;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            negative.push_back(arr[i]);
        }
        else
        {
            positive.push_back(arr[i]);
        }
    }

    for (int i = 0; i < arr.size() / 2; i++)
    {
        arr[i * 2] = positive[i];
        arr[i * 2 + 1] = negative[i];
    }
}

void reArrangeArrayBetter(vector<int> &arr)
{
    vector<int> positive;
    vector<int> negative;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            negative.push_back(arr[i]);
        }
        else
        {
            positive.push_back(arr[i]);
        }
    }

    if (negative.size() > positive.size())
    {
        for (int i = 0; i < positive.size(); i++)
        {
            arr[i * 2] = negative[i];
            arr[i * 2 + 1] = positive[i];
        }
        int startIndex = positive.size() * 2;
        for (int j = positive.size(); j < negative.size(); j++)
        {
            arr[startIndex] = negative[j];
            startIndex++;
        }
    }
    else
    {
        for (int i = 0; i < negative.size(); i++)
        {
            arr[i * 2] = positive[i];
            arr[i * 2 + 1] = negative[i];
        }
        int startIndex = negative.size() * 2;
        for (int j = negative.size(); j < positive.size(); j++)
        {
            arr[startIndex] = positive[j];
            startIndex++;
        }
    }
}

void printBeforeAfter(vector<int> arr, int length)
{
    cout << "Before sorting" << endl;
    for (int i = 0; i < length; i++)
        cout << arr[i] << ", ";

    cout << endl;
    reArrangeArrayBetter(arr);

    cout << "After sorting" << endl;
    for (int i = 0; i < length; i++)
        cout << arr[i] << ", ";
}
int main()
{
    vector<int> arr = {3, -1, -7, 9, -2, -5, 2, -4};
    printBeforeAfter(arr, arr.size());
    return 0;
}