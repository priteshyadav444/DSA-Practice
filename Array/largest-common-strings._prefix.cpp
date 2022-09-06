//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
      string longestCommonPrefix_1 (string arr[], int N)
    {
        string res=0;
        for(int i=0; i<arr[0].length(); i++)
        {
            for(int j=1; j < N; j++)
            {
                if(i>=arr[j].length() || (arr[0][i] != arr[j][i])) break;
            }
            res += arr[0][i];
        }
        if(res=="") return "-1";
        return res;
    }
    string longestCommonPrefix_2 (string arr[], int N)
    {
        if(N==1) return arr[0];
        string res="";
        bool include;
        for(int i=0; i<arr[0].length(); i++)
        {
            include = true;
            for(int j=1; j < N; j++)
            {
                if(i>=arr[j].length() || (arr[0][i] != arr[j][i])) { include=false; break; }
            }
            if(!include) break;
            res += arr[0][i];
        }
        if(res=="") return "-1";
        return res;
    }

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix_2(arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends