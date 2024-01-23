#include <iostream>
using namespace std;
void pattern21(int n)
{
    // Square
    // ****
    // *  *
    // *  *
    // ****
    // int n = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i == 0 || i == (n - 1) || j == 0 || j == (n - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
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
        int n = 15;
        // cout << "value of N: ";
        // cin >> n;

        pattern21(n);
    }
    return 0;
}