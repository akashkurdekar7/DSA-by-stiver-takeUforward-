#include <iostream>
using namespace std;
void pattern1(int n)
{
    // stars
    // ***
    // ***
    // ***
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    // stars
    // *
    // **
    // ***
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    // stars
    // 1
    // 12
    // 123
    for (int i = 0; i < n; i++)
    {
        int a = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    // stars
    // 1
    // 22
    // 333
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a;
        }
        a++;
        cout << endl;
    }
}
void pattern5(int n)
{
    // stars
    // ***
    // **
    // *
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    // stars
    // 123
    // 12
    // 1
    for (int i = 0; i < n; i++)
    {
        int a = 1;
        for (int j = n; j > i; j--)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    // pyramid stars
    // --*--
    // -***-
    // *****
    for (int i = 0; i < n; i++)
    {
        // space
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << "-";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << "-";
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    // pyramid stars
    // *****
    // -***-
    // --*--
    for (int i = 0; i < n; i++)
    {
        // space
        for (int k = 0; k < i; k++)
        {
            cout << "-";
        }
        // stars
        // important formulae
        int a = 2 * n - (2 * i + 1);
        for (int j = 0; j < a; j++)
        {
            cout << "*";
        }
        // space
        for (int k = 0; k < i; k++)
        {
            cout << "-";
        }
        cout << endl;
    }
}
void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}
void pattern10(int n)
{
    // stars
    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    // 1
    // 01
    // 101
    // 0101
    // 10101
    for (int i = 0; i < n; i++)
    {
        int start;
        if (i % 2 == 0)
            start = 1;
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            // flip the start basic maths
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12(int n)
{
    // 1--------1
    // 12------21
    // 123----321
    // 1234--4321
    // 1234554321
    for (int i = 1; i <= n; i++)
    {
        int space = 2 * (n - i);
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= space; k++)
        {
            cout << "-";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern13(int n)
{
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    int numbers = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << numbers << " ";
            numbers++;
        }
        cout << endl;
    }
}
void pattern14(int n)
{
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    for (int i = 1; i <= n; i++)
    {
        char alphabets = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << alphabets;
            alphabets++;
        }
        cout << endl;
    }
}
void pattern15(int n)
{
    // ABCDE
    // ABCD
    // ABC
    // AB
    // A
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = n - i; j >= 0; j--)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}
void pattern16(int n)
{
    // A
    // BB
    // CCC
    // DDDD
    // EEEEE
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        ch = ch + 1;
        cout << endl;
    }
}
void pattern16_1(int n)
{
    // 1 2 3 4 5
    // 2 3 4 5
    // 3 4 5
    // 4 5
    // 5
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n;)
        {
            j++;
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << "-";
        }

        char ch = 'A';
        int bp = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= bp)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << "-";
        }
        cout << endl;
    }
}
void pattern18(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int t = 1;
    // cout << "test cases: ";
    // cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n = 5;
        // cout << "value of N: ";
        // cin >> n;

        pattern18(n);
    }
    return 0;
}