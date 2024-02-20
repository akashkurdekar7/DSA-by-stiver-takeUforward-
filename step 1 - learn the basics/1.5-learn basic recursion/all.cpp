#include <bits/stdc++.h>
using namespace std;
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
    int i = 1, j = s.length();
    // for (int i = 0; i < s.length(); i++)
    while (i < j)
    {
        
    }
}
int main()
{
    int n = 5;
    string s = "ABC";
    // recursion(n, 1);
    // sum_of_N(n);
    // factorial(n);
    // reverse_array(n);
    palindrome(s);
    return 0;
}