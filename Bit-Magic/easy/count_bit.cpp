#include<iostream>

using namespace std;
 
int countBit(int n)
{
    int count = 0;
    while(n!=0)
    {
        if(n%2==1) count++;
        n/=2; 
    } 
    return count; 
}
int kernigham(int n)
{
    int count=0;
    while(n)
    {
        n &=(n-1);
        count++;
    }
    return count;
}

int main()
{

cout<<kernigham(63); 
return 0;
}