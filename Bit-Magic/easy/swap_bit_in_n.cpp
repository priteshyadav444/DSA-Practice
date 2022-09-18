#include<iostream>

using namespace std;
 
int swap(int n, int p1, int p2)
{
    int bit1 = (n>>p1) & 1;
    int bit2 = (n>>p2) & 1;
    int xr = bit1 ^ bit2;

    xr = xr<<p1 | xr<<p2;

    n = n ^ xr;
    return n;
}
int main()
{
cout<<swap(28 ,0 , 3); 

return 0;
}