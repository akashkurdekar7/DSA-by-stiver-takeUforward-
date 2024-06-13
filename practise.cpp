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

void addDigits(int n)
{

    while (n >= 10)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    cout << n << endl;
}

void divisible(int n)
{
    int count = 0;
    if (n <= 1)
    {
        cout << n;
        return;
    }
    int og = n;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 0 && og % digit == 0)
        {
            count++;
        }
        n /= 10;
    }
    cout << count;
}

void prime(int n)
{
    int size = n / 2;
    cout << size << endl;
    if (n <= 1)
    {
        cout << n;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << "no";
        }
    }
    cout << "yes" << endl;
}

uint32_t revBits(uint32_t n)
{

    uint32_t rev = 0;
    for (int i = 0; i < 32; i++)
    {
        rev = (rev << 1) | (n & 1);
        n >>= 1;
    }
    return rev;
}

void check_armstrong(int n)
{
    int digits = 0, sum = 0;
    int temp = n;
    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }
    // cout << digits;
    temp = n;
    while (temp != 0)
    {
        int y = temp % 10;
        sum = sum + pow(y, digits);
        temp /= 10;
    }
    if (sum == n)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}

void findSetBitPosition(int N)
{
    if (N == 0 || (N & (N - 1)) != 0)
    {
        cout << -1 << endl; // If N is 0 or has more than one set bit, return -1
        return;
    }
    int position = 1;
    while ((N & 1) != 1)
    {
        N >>= 1; // Right shift N until the LSB becomes 1
        position++;
    }
    cout << position;
}

void watermelon(int n)
{
    if (n >= 2 && n % 2 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    int n = 5; // 3
    // cout << "n: ";
    // cin >> n;
    // string s = "A man, a plan, a canal: Panama";
    // palindrome(s);
    // cout << "F(" << n << ") = " << Fibonacci(n) << endl;
    // countDigits(n);
    // addDigits(n);
    // divisible(n);
    // prime(n);
    // uint32_t reversed = revBits(n);

    // cout << "reversed " << bitset<32>(reversed) << endl;
    // check_armstrong(n);
    // findSetBitPosition(n);
    // watermelon(n);

    return 0;
}