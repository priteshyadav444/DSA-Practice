#include <bits/stdc++.h>

using namespace std;
vector<int> spiralTraversal(vector<vector<int>> &matrix, int n, int m)
{
    vector<int> result;
    int left = 0;
    int right = m - 1;
    int top = 0;
    int bottom = n - 1;
    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            result.push_back(matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            result.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom)
        {

            for (int i = right; i >= left; i--)
            {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return result;
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

    vector<int> result = spiralTraversal(arr, n, m);

    cout << "Spiral traversal After" << endl;
    for (int i = 0; i < result.size(); i++)
    {

        cout << result[i];
        cout << " ";
    }

    return 0;
}