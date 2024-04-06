#include <bits/stdc++.h>
using namespace std;
#include <cctype>

void recursion(int i, int n)
{
    if (i < n)
        return;
    cout << "hiii" << endl;
    recursion(i - 1, n);
}
void sum_of_N(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
}
void factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    cout << ans;
}
void reverse_array(int n)
{
    int a[n] = {1, 2, 3, 4};
    for (int i = 0; i < n / 2; i++)
    {

        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    // Print the reversed array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void palindrome(string s)
{

    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            cout << s << false << " no" << endl;
            return;
        }
        i++;
        j--;
    }
    cout << s << " " << true << " yes" << endl;
}
int fibonacci(int n)
{
    // 0 1 1 2 3 5
    int i = 0, j = 1, sum;
    while (i <= n)
    {
        cout << i << " ";
        sum = i + j;
        i = j;
        j = sum;
    }
    cout << endl;

    // step 2
    // if (n <= 1)
    // {
    //     return n;
    // }

    // Problem broken down into 2 functional calls
    // and their results combined and returned.
    // int last = fibonacci(n - 1);
    // int slast = fibonacci(n - 2);

    // return last + slast;
}
int main()
{
    int n = 4;
    string s = "Racecar";
    // recursion(n, 1);
    // sum_of_N(n);
    // factorial(n);
    // reverse_array(n);
    // palindrome(s);
    cout << fibonacci(n) << endl;
    return 0;
}