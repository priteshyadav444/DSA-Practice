//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends

// O(n+m) Solution
string isSubset_1(int a1[], int a2[], int n, int m) {
    if(m>n){
        return "No";
    }
    sort(a1, a1 + n);
    sort(a2, a2 + m);
    int j = 0;
    
    for(int i=0; i<n; i++){
        if(a1[i]==a2[j]) j++;
      //  else if(a1[i]>a2[j]) return "No";
    }
    cout<<j<<endl;
    if(j>=m){
        return "Yes";
    }
    return "No";
    
}

// O(n) Solution
string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map <int, int> mp(n);
    for(int i=0;i < n; i++)
    {
       mp[a1[i]]++; 
    }
    
    for(int i=0; i<m; i++){
        if(mp[a2[i]]==0) return "No";
        if(mp[a2[i]]==1) mp[a2[i]] = 0;
    }
    
    return "Yes";
    
}