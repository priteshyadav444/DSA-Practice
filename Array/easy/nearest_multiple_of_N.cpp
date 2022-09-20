//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    string roundToNearest(string str) 
    {
        int n = str.size();
        int carry = 0;

        if(str[n-1]<='5'){
            str[n-1] = '0';
            return str;
        }
        else{
            str[n-1] = '0';
            carry = 1;
        }

        for(int i=n-2; i>=0 && carry==1; i--)
        {
            int digit = str[i] - '0';
            digit++;
            carry = 0;
            if(digit==10)
            {
                digit = 0;
                carry = 1;
            }
            str[i] = digit + '0';
        }
        if(carry) return ("1"+str);
        return str;

    }
};

//{ Driver Code Starts.

int main() {
    
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout << ob.roundToNearest(s) << endl;
    }
    
	return 0;
}
// } Driver Code Ends