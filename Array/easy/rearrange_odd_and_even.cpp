// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void reArrange(int a[], int n) {
       int even_idx = 0;
       int odd_idx = 1;
       int i = 0;
       while(i<n )
       {
           if(a[i]%2==0 && i%2!=0){
               swap(a[i],a[even_idx]);
               even_idx+=2;
           }
           else if(a[i]%2==1 && i%2!=1){
              swap(a[i],a[odd_idx]);
                odd_idx+=2;
           }
           else{
            i++;
           }
       }
    }
      void reArrange_1(int a[], int n) {
       int even_idx = 0;
       int odd_idx = 1;
       int i = 0;
       while(even_idx<n-1 && odd_idx<n )
       {
          if(a[even_idx]%2==0) even_idx+=2;
          else if(a[odd_idx]%2==1) odd_idx+=2;
          else swap(a[even_idx], a[odd_idx]);
       }
    }
};

// { Driver Code Starts.

int check(int arr[], int n)
{
    int flag = 1;
    int c=0, d=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(arr[i]%2)
            {
                flag = 0;
                break;
            }
            else
                c++;
        }
        else
        {
            if(arr[i]%2==0)
            {
                flag = 0;
                break;
            }
            else
                d++;
        }
    }
    if(c!=d)
        flag = 0;
        
    return flag;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        ob.reArrange(arr,N);
        
        cout<<check(arr,N)<<endl;
    }
    return 0;
}  // } Driver Code Ends