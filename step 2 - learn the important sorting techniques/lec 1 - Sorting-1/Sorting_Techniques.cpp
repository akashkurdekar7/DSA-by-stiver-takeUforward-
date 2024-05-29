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
}

void bubbleSort(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
}

void InsertionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            int temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
            j--;
        }
    }
}

void output(int a[], int n)
{
    cout << "Elements Ouput: ";
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

    // selectionSort(a, n);
    // bubbleSort(a, n);
    InsertionSort(a, n);
    output(a, n);
    return 0;
}