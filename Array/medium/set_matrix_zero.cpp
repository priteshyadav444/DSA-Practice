#include <bits/stdc++.h>

using namespace std;
void setMatrixAsZeroBetter(vector<vector<int>> &matrix, int n, int m)
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

void setMatrixAsZeroOptimal(vector<vector<int>> &matrix, int n, int m)
{
    int col0 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                if (j != 0)
                {
                    matrix[0][j] = 0;
                }
                else
                {
                    col0 = 0;
                }
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] != 0)
            {
                if (matrix[0][j] == 0 || matrix[i][0] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < m; j++)
            matrix[0][j] = 0;
    }

    if (col0 == 0)
    {
        for (int j = 0; j < n; j++)
            matrix[j][0] = 0;
    }
}
int main()
{
    vector<vector<int>> arr = {{1, 1, 0},
                               {4, 0, 5},
                               {0, 3, 5}};
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

    setMatrixAsZeroOptimal(arr, n, m);
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