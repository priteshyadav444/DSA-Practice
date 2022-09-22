//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool saveIronman(string ch);


int main()
{
    int t,b,c,d,e,f,g,h;
    cin>>t;
    char cc;
    cc = getchar();
    
    while(t--)
    {
        string ch;
        getline(cin,ch);
        
        if(saveIronman(ch)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        
    }
}

// } Driver Code Ends


bool saveIronman(string ch)
{
    char c;
    int char_arr[256] = {0};
    int count = 0;
    transform(ch.begin(), ch.end(), ch.begin(), ::tolower);
    for (int i = 0; i < ch.size(); i++)
    {
        c = ch.at(i);
        if (c >= 'a' and c <= 'z' or c >= '0' and c <= '9')
        {
            int index = c - '0';
            char_arr[index]++;
        }
    }
    for (int i = 0; i <= 255; i++)
    {
        //    cout << i << ":" << char_arr[i] << endl;
        if ((char_arr[i]) % 2 == 1)
            count++;
        if (count > 1)
            return 0;
    }
  
    return 1;
}
// bool saveIronman(string ch)
// {
//     unordered_map <char,int> mp;
//     for(int i=0; i<ch.size(); i++)
//     {
//         char c = ch[i];
//         if(c>='a' && c<='z')
//              mp[c]+=1;
//         if( c>='A' && c<='Z')
//              mp[tolower(c)]+=1;
             
//         int ia = c - '0';
//         if((ia>=0) && (ia<=9))
//             mp[c - '0']+=1;
        
//     }
//     int flag = 0;
   
    
//     for(int i=0; i<26; i++)
//         if(mp[i+'a']%2!=0 ){ if(flag){return false;} flag=true; } 

//     for(int i=0; i<10;i++)
//         if(mp[i]%2!=0) { if(flag){return false;} flag=true; }
    
//     return true;
// }
