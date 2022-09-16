#include <iostream>

using namespace std;

void solve(int arr[], int n)
{
    int ans1 = 0;
    int ans2 = 0;
    int xor_ele = 0;
    for (int i = 0; i < n; i++) xor_ele = xor_ele ^ arr[i];
    
    xor_ele = xor_ele & ~ (xor_ele - 1);
    for(int i=0; i<n; i++) 
    {
        if((arr[i] ^ xor_ele)==0) ans1 = ans1 ^ arr[i];
        else ans2 = ans2 ^ arr[i]; 
    }

    cout<<ans1<<","<<ans2<<endl;
}
int main()
{
    int arr[] = {3,4, 3, 4, 8, 4, 4, 32, 7, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    solve(arr, size);
    return 0;
}