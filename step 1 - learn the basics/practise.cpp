#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <cctype>

void palindrome(string s)
{
    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        if (!isalnum(s[i]))
        {
            i++;
            continue;
        }
        if (!isalnum(s[j]))
        {
            j--;
            continue;
        }
        if (tolower(s[i++]) != tolower(s[j--]))
        {
            cout << s << " " << false << " no" << endl;
        }
    }
    cout << s << " " << true << " yes, is a palindrome" << endl;
}

int Fibonacci(int n)
{
    if (n <= 1)
        return n;

    int a = 0, b = 1;
    for (int i = 2; i <= n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main()
{
    int n = 4;
    // string s = "A man, a plan, a canal: Panama";
    // palindrome(s);
    cout << "F(" << n << ") = " << Fibonacci(n) << endl;
    return 0;
}