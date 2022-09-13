//{ Driver Code Starts
#include <bits/stdc++.h>


using namespace std;




// } Driver Code Ends

class Solution{
  public:
    int Countpair(int arr[], int n, int K){
        int j = 1;
        int ans = 0;
        for(int i=0; i<n-1;){
            int sum = arr[i] + arr[j];
            if(sum==K){
                ans++;
                j++;
            }
            else if(sum>K){
                i++;
                j = i + 1;
            }
            else{
                j++;
            }
            
            if(j==n){
                i++;
                j = i+1;
            }
        }
        if(ans==0) return -1;
        return ans;
    }

    int Countpair_1(int arr[], int n, int sum){
        int i=0;
        int j=n-1;
        int ans = 0;
        while(i!=j)
        {
            if(arr[i]+arr[j]>sum)
            {
                j--;
            }
            else if(arr[i]+arr[j]<sum)
            {
                i++;
            }
            else
            {
                ans++;
                i++;
            }
        }
        if(ans==0) return -1;
        return ans;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}

// } Driver Code Ends