#include<iostream>

using namespace std;
int solve(int n){
    while(n!=1)
    {
        if(n%2==1) return false;
        n /= 2;
    }
    return true;
}
int solve_1(int n)
{
    if((n&(n-1))==0) return true;
    return false;
}
int main()
{
cout<<solve_1(36); 

return 0;
}