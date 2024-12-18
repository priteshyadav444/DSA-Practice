#include <bits/stdc++.h>
using namespace std;
vector<int> prepareIntersectionArray(vector<int> arr1, vector<int> arr2)
{
    int size1 = arr1.size();
    int size2 = arr2.size();
    int visited[size2] = {0};
    vector<int> intersection;

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j] && visited[i] == 0)
            {
                intersection.push_back(arr1[i]);
                visited[i] = 1;
            }

            if (arr2[j] > arr1[i])
                break;
        }
    }

    return intersection;
}

vector<int> prepareIntersectionArraySolution2(vector<int> arr1, vector<int> arr2)
{
    int size1 = arr1.size();
    int size2 = arr2.size();
    int i = 0;
    int j = 0;
    vector<int> intersection;

    while (i < size1 && j < size2)
    {
        if (arr1[i] > arr2[j])
        {
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            intersection.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return intersection;
}

void prepareIntersectionArrayPrint(vector<int> arr1, vector<int> arr2)
{
    cout << "Array 1 sorting" << endl;
    for (int i = 0; i < arr1.size(); i++)
        cout << arr1[i] << ", ";

    cout << endl
         << "Array 2 sorting" << endl;
    for (int i = 0; i < arr2.size(); i++)
        cout << arr2[i] << ", ";

    cout << endl;
    vector<int> intersectionArray;
    intersectionArray = prepareIntersectionArraySolution2(arr1, arr2);

    cout << "Intersection " << endl;
    for (int i = 0; i < intersectionArray.size(); i++)
        cout << intersectionArray[i] << ", ";
}
int main()
{
    vector<int> arr1 = {1, 1, 2, 3, 4, 5, 7};
    vector<int> arr2 = {2, 3, 4, 4, 5, 6, 7};
    prepareIntersectionArrayPrint(arr1, arr2);
    return 0;
}