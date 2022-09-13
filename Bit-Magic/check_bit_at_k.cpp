#include<iostream>

using namespace std;

int solve(int n, int k )
{
    if((n>>(k-1)&1) == 1) return 1;
    return 0;
} 
int main()
{
cout<<solve(8, 4);
return 0;
}