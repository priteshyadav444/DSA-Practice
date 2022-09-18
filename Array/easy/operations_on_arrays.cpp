#include <bits/stdc++.h>
using namespace std;
void print_array(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void insert_element(int arr[], int ele, int pos, int size)
{
  if (size == 0 || pos < 0)
    return;

  for (int i = size - 1; i > pos; i--)
  {
    arr[i] = arr[i - 1];
  }

  arr[pos] = ele;
}
int max_element(int arr[], int size)
{
  if (size == 0)
  {
    return -1;
  }

  int ans = arr[0];
  for (int i = 1; i < size; i++)
  {
    if (arr[i] > arr[ans])
    {
      ans = i;
    }
  }
  return arr[ans];
}

vector<int> leaders(int a[], int n)
{
  int cmax = INT_MIN;
  vector<int> ans;

  for (int i = n - 1; i >= 0; i--)
  {
    if (a[i] >= cmax)
    {
      cmax = a[i];
      ans.push_back(a[i]);
    }
  }
  reverse(ans.begin(), ans.end());
  return ans;
}
int remove_duplicate(int a[], int n)
{
  sort(a, a + n);
  vector<int> ans;
  ans.push_back(a[0]);
  for (int i = 1; i < n; i++)
  {
    if (a[i] != ans[ans.size() - 1])
    {
      ans.push_back(a[i]);
    }
  }
  for (int i = 0; i < ans.size(); i++)
  {
    a[i] = ans[i];
  }
  print_array(a, ans.size());
  return ans.size();
}
void print_vector(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void threeWayPartition(vector<int> &ar, int a, int b)
{
  int c1 = 0, c2 = 0, c3 = 0;

  for (int i = 0; i < ar.size(); i++)
  {
    if (ar[i] < a)
    {
      c1++;
    }
    else if (ar[i] > b)
    {
      c3++;
    }
    else
    {
      c2++;
    }
  }
  cout<<c1<<endl;
  cout<<c2<<endl;
  cout<<c3<<endl;

  int idx1 = 0, idx2 = c1, idx3 = c1+c2;
  cout<<idx1<<endl;
  cout<<idx2<<endl;
  cout<<idx3<<endl;
  vector<int> ans(ar.size());
  for (int i = 0; i < ar.size(); i++)
  {
    if (ar[i] < a)
    {
      ans[idx1++] = ar[i];
    }
    else if (ar[i] > b)
    {
      ans[idx3++] = ar[i];
    }
    else
    {
      ans[idx2++] = ar[i];
    }
  }

  for (int i = 0; i < ar.size(); i++)
  {
    ar[i] = ans[i];
  }
}

int main()
{
  vector <int> arr = {1, 2, 3, 3, 4};
  int size = sizeof(arr) / sizeof(arr[0]);
  print_vector(arr);
  threeWayPartition(arr, 1, 2);
  print_vector(arr);
  return 0;
}
