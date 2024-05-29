#include <bits/stdc++.h>
using namespace std;
void selectionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    cout << "Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Elements Ouput: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    selectionSort(a, n);

    return 0;
}