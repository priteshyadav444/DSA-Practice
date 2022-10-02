//{ Driver Code Starts
//Initial template for C++
 
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{
public:
   int minLength(string s, int n) {
        stack<int>st;

        for(int i=s.size()-1;i>=0;i--){

            if(st.empty()){

                st.push(s[i]-'0');

                continue;

            }

            int x=s[i]-'0';

            if(x%2==0){

                if(x==0 && st.top()==9)

                st.pop();

                else if(st.top()==x-1)

                st.pop();

                else

                st.push(x);

            }

            else{

                if(x==9 && st.top()==0)

                st.pop();

                else if(st.top()==x+1)

                st.pop();

                else

                st.push(x);

            }

            

        }

        return st.size();
    }  
};


//{ Driver Code Starts.

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        Solution obj;
        cout << obj.minLength(s, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends