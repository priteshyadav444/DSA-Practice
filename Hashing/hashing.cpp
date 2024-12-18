#include <bits/stdc++.h>
using namespace std;
void countNumberOfOccurenec(int arr[], int length)
{

    int hash[length] = {0};
    for (int i = 0; i < length; i++)
    {
        hash[arr[i]] += 1;
    }

    for (int i = 0; i < length; i++)
    {
        cout << "Count of " << arr[i] << " :" << hash[arr[i]] << endl;
    }
}
void countNumberOfOccurenecInMap(int arr[], int length)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < length; i++)
    {
        mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    cout<<mp[45]<<endl;
}
int main()
{
    int arr[] = {2, 2, 3, 1, 2, 1};
    countNumberOfOccurenec(arr, 5);
    // countNumberOfOccurenecInMap(arr, 6);
    return 0;
}