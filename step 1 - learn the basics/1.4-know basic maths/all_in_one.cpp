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

bool isPrime(int n)
{

    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void isArmstrong(int n)
{
    int sum = 0;
    int temp = n;
    int N = sizeof(n) - 1;

    while (temp != 0)
    {
        int digit = temp % 10;
        cout << sum << endl;
        cout << "-" << endl;
        sum = sum + digit * N;
        cout << sum << endl;
        temp =temp/ 10;
    }
    if (sum == n)
    {
        cout << n << " is an Armstrong number." << endl;
    }
    else
    {
        cout << n << " is not an Armstrong number." << endl;
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
    // isPrime(5) ? cout << "true \n" : cout << "false \n";
    isArmstrong(153);
    return 0;
}
