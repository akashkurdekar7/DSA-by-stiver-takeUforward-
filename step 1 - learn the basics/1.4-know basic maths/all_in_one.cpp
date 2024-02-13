#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    // step 1
    int x = n;
    int count = 0;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    return count;

    // step 2
    // string x = to_string(n);
    // return x.length();

    // step 3
    // int x = n;
    // return log10(x) + 1;
}

int rev_number(int n)
{
    int x = n;
    int rev = 0, digit;
    while (x != 0)
    {
        digit = x % 10;
        rev = rev * 10 + digit;
        x = x / 10;
    }
    return rev;
}

void palindrome(int n)
{
    int rev = rev_number(n);
    if (n == rev)
    {
        cout << "the digit " << n << " is palindrome";
    }
    else
    {
        cout << "the digit " << n << " is not a palindrome";
    }
}

void divisor(int n)
{
    cout << "The Divisors of " << n << " are:" << endl;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << "\n";
}

void primeNumber(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % 1 == 0 )
        {
            cout << "prime number: " << i << endl;
        }
        else
        {
            cout << "Not prime number: " << i << endl;
        }
    }
}
int main()
{

    // countDigits(n);
    // cout << "the number of digits in " << n << " is " << countDigits(n);
    // rev_number(n);
    // cout << "the reverse of digits " << n << " is " << rev_number(n);
    // palindrome(n);

    // divisor(6);
    primeNumber(26);
    return 0;
}
