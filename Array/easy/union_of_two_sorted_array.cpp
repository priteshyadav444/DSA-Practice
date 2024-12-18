#include <bits/stdc++.h>

using namespace std;

set<int> prepareUnionOfArray(vector<int> arr1, vector<int> arr2)
{
    set<int> unionSet;
    for (int i = 0; i < arr1.size(); i++)
        unionSet.insert(arr1[i]);

    for (int i = 0; i < arr2.size(); i++)
        unionSet.insert(arr2[i]);

    return unionSet;
}

vector<int> prepareUnionOfArraySolution1(vector<int> arr1, vector<int> arr2)
{
    int size1 = arr1.size();
    int size2 = arr2.size();
    int i = 0;
    int j = 0;
    vector<int> unionSet;
    while (i < size1 && j < size2)
    {
        if (arr1[i] >= arr2[j])
        {
            if (unionSet.size() == 0 || unionSet.back() != arr2[j])
            {
                unionSet.push_back(arr2[j]);
            }
            j++;
        }
        else
        {
            if (unionSet.size() == 0 || unionSet.back() != arr1[i])
            {
                unionSet.push_back(arr1[i]);
            }
            i++;
        }
    }

    while (i < size1)
    {
        if (unionSet.size() == 0 || unionSet.back() != arr1[i])
        {
            unionSet.push_back(arr1[i]);
        }
        i++;
    }

    while (j < size2)
    {
        if (unionSet.size() == 0 || unionSet.back() != arr2[j])
        {
            unionSet.push_back(arr2[j]);
        }
        j++;
    }
    
    return unionSet;
}

void prepareUnionOfArrayPrint(vector<int> arr1, vector<int> arr2)
{
    cout << "Array 1 sorting" << endl;
    for (int i = 0; i < arr1.size(); i++)
        cout << arr1[i] << ", ";

    cout << endl
         << "Array 2 sorting" << endl; 
    for (int i = 0; i < arr2.size(); i++)
        cout << arr2[i] << ", ";

    cout << endl;
    vector<int> unionArray = prepareUnionOfArraySolution1(arr1, arr2);

    for (int i = 0; i < unionArray.size(); i++)
        cout << unionArray[i] << ", ";
} 

int main()
{
    vector<int> arr1 = {1, 1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5, 6};
    prepareUnionOfArrayPrint(arr1, arr2);
    return 0;
}