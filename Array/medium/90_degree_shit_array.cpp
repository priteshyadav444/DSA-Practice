#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> rotateArray90DegreeBrute(vector<vector<int>> &matrix, int n, int m)
{
    vector<vector<int>> result(m, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result[j][n - i - 1] = matrix[i][j];
        }
    }
    return result;
}

void rotateArray90DegreeOptimal(vector<vector<int>> &matrix, int n, int m)
{
    // Making transpos matrix of this array
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reversing each row
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};
    int n = 3;
    int m = 3;
    cout << "Before" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
            bool isLastIterationOnThisRow = (j == m - 1);
            if (!isLastIterationOnThisRow)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    vector<vector<int>> result = rotateArray90DegreeBrute(arr, n, m);
    rotateArray90DegreeOptimal(arr, m, n);

    cout << "After" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << result[i][j];
            bool isLastIterationOnThisRow = (j == m - 1);
            if (!isLastIterationOnThisRow)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}