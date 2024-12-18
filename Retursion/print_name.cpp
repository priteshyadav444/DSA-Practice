#include <bits/stdc++.h>
using namespace std;

void printName(int count)
{
    if (count == 0)
    {
        return;
    }
    cout << "Pritesh"
         << "Value of count is : " << count << endl;

    printName(count - 1);
}

void printNumberWithBackTracking(int n)
{
    if(n <= 0 ){
        return;
    }

    cout<<n<<endl;
    printNumberWithBackTracking(n - 1);
}

int sumOfNumber(int n)
{
    if (n <= 0)
    {
        return 0;
    }

    return n + sumOfNumber(n - 1);
}

void swapByRecursion(int start, int length, int arr[])
{
    if (start >= length / 2) 
        return;
        
    swap(arr[start], arr[length - start - 1]);
    swapByRecursion(start + 1, length, arr);
}

bool checkPalindrome(string text, int start, int length)
{
    if (start >= length / 2) return true;
    if (text[start] != text[length - start - 1]) return false;
    return checkPalindrome(text, start + 1, length);
}

int main()
{
    string text = "madam";
    printNumberWithBackTracking(5);
    // cout << checkPalindrome(text, 0, text.length());
}