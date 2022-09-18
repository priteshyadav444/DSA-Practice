#include <iostream>

using namespace std;

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rearrange(int arr[], int size)
{
    int track = size - 1;
    int cnt = 0;

    for (int i = 0; i < size - 1 && i < track; i++)
    {

        if (arr[i] == 0)
        {
            while (track > 0)
            {
                if (arr[track] == 0)
                {
                    track--;
                }
                else
                {
                    int temp = arr[track];
                    arr[track] = arr[i];
                    arr[i] = temp;
                    track--;
                    break;
                }
            }
        }
    }
}


void reverse(int arr[], int size)
{
    int count = size - 1;
    for (int i = 0; i < size - 1 && i < count; i++)
    {
        int temp = arr[count];
        arr[count] = arr[i];
        arr[i] = temp;
        count--;
    }
}

void reverse1(int arr[], int size)
{
    int low = 0, high = size - 1;

    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

void rotate_left(int arr[], int size)
{
    if (size == 0)
    {
        return;
    }

    int first_element = arr[0];

    for (int i = 1; i < size; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[size - 1] = first_element;
}

void arrange_inorder(int A[], int N)
{
     int count = 0;
    for (int i = 0; i < N; i++)
    {
       
        if (A[i] == 0)
        {
            int temp = A[count];
            A[count++] = A[i];
            A[i] = temp;
        }
    }
    print_array(A, N);
}

int main()
{
    int arr[] = {1, 0, 1, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, size);
    arrange_inorder(arr, size);
    
    return 0;
}