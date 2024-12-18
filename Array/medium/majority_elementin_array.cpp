//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {

        int maj_index = 0, count = 1;
        for (int i = 1; i < size; i++)
        {
            if (a[maj_index] == a[i])
                count++;
            else
                count--;
            if (count == 0)
            {
                maj_index = i;
                count = 1;
            }
        }
        return a[maj_index];
    }

    int majorityElementUsingMap(int a[], int size)
    {
        unordered_map<int, int> mpp;
        for (int i = 0; i < size; i++)
        {
            mpp[a[i]] += 1;
        }
        int majorityNumber = size / 2;
        for (auto it : mpp)
        {
            if (it.second > majorityNumber)
            {
                return it.first;
            }
        }
        return -1;
    }
    int majorityElementOptimalWay(int a[], int size)
    {

        int majorityELment = 0, count = 1;
        for (int i = 0; i < size; i++)
        {
            if (count == 0)
            {
                majorityELment = a[i];
                count = 1;
            }
            else if (a[i] == majorityELment)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return majorityELment;
    }
};

//{ Driver Code Starts.

int main()
{

    int arr[] = {2, 2, 1, 2, 2, 3, 1, 1, 2, 1, 1};
    Solution obj;
    cout << obj.majorityElementOptimalWay(arr, 9) << endl;

    return 0;
}