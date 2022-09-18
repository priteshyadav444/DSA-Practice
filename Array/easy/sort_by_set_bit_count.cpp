//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
int bitCount(int x)
{
    int cnt = 0;

    while (x)
    {
        if (x % 2)
            cnt++;
        x /= 2;
    }
    return cnt;
}
//bit count by jernigham algorithm 
int bitCount_1(int x)
{
    int cnt = 0;

    while (x)
    {
        if (x % 2)
            cnt++;
        x /= 2;
    }
    return cnt;
}
bool camp(int x, int y)
{
    int c1 = bitCount(x);
    int c2 = bitCount(y);

    if (c1 <= c2)
        return false;
    return true;
}

class Solution
{
public:
    void sortBySetBitCount(int arr[], int n)
    {
        stable_sort(arr, arr + n, camp);
    }
    void sortBySetBitCount_1(int arr[], int n)
    {
        unordered_map <int, vector <int>> um;
        int mx = INT_MIN;
        int mn = INT_MAX;

        for(int i=0; i<n; i++)
        {
            int bit = bitCount(arr[i]);
            um[bit].push_back(arr[i]);
            mx = max(mx, bit);
            mn = min(mn, bit);
        }

        int idx = 0;
        for(int i=mx; i>=mn; --i)
        {
            if(um.count(i))
            {
                for(auto &ele: um[i])
                {
                    arr[idx] = ele;
                    idx++;
                }
            }
        }
        return;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount_1(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends