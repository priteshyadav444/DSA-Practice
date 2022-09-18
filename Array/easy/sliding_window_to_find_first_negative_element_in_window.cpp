//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[], long long int n, long long int K) {
                                
                                deque <int> dq;
                                vector <long long> ans;
                                int i;
                                for(i=0; i<K; i++){
                                    if(A[i]<0){
                                        dq.push_back(i);    
                                    }
                                }
                                
                                for(;i<n; i++){
                                    // first negative no from previos windows
                                    if(!dq.empty()) ans.push_back(A[dq.front()]);
                                    else ans.push_back(0);
                                    // removing elemet which is not in this window
                                    if(!dq.empty() && dq.front() <= i-K){
                                        cout<<"Check " <<i<<endl;
                                        dq.pop_front();
                                    }
                                    
                                    if(A[i]<0){
                                        dq.push_back(i);
                                    }
                                }
                                // first negative no from last windows
                                if(!dq.empty()) ans.push_back(A[dq.front()]);
                                else ans.push_back(0);
                                
                                return ans;
}