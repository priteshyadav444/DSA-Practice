#include <bits/stdc++.h>

using namespace std;
void setMatrixAsZero(vector<vector<int>> &matrix, int n, int m)
{
    int row[n] = {0};
    int col[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}
int main()
{
    vector<vector<int>> arr = {{0, 1, 4},
                               {4, 0, 5},
                               {2, 3, 0}};
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

    setMatrixAsZero(arr, n, m);
    cout << "After" << endl;
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

    return 0;
}