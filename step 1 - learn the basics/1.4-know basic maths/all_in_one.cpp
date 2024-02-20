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
    double sum = 0;
    int temp = n;
    int numDigits = 0;

    // Count the number of digits in n
    while (temp != 0)
    {
        temp /= 10;
        numDigits++;
    }

    temp = n;

    while (temp != 0)
    {
        int digit = temp % 10;
        sum = sum + pow(digit, numDigits);
        temp /= 10;
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

void gcd(int a, int b)
{
    // int size = min(n1, n2);
    // int ans;
    // for (int i = 1; i <= size; i++)
    // {

    //     if (n1 % i == 0 && n2 % i == 0)
    //     {
    //         ans = i;
    //     }
    // }
    // step 2
    // while (b != 0)
    // {
    //     int temp = b;
    //     b = a % b;
    //     a = temp;
    // }
    // cout << a;

    if (b == 0)
    {
        cout << a;
    }
    return gcd(b, a % b);
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
    // isArmstrong(153);
    // isArmstrong(1634);
    gcd(10, 4);
    return 0;
}
