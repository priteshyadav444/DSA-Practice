#include <bits/stdc++.h>
using namespace std;

void threeWayPartition_1(vector<int> &ar, int a, int b)
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


  int idx1 = 0, idx2 = c1, idx3 = c1+c2;
  
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
void threeWayPartition_2(vector<int> &ar, int a, int b){
        int n = ar.size(); int low = 0; int mid = 0; int high = n - 1;
        
        while(mid <=high){
            if(ar[mid] < a) swap(ar[low++], ar[mid++]);
            else{
                if(ar[mid] > b) swap(ar[mid], ar[high--]);
                else mid++;
            }
        }
}
void print_vector(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    print_vector(arr);
    threeWayPartition_2(arr, 1, 2);
    print_vector(arr);
    return 0;
}