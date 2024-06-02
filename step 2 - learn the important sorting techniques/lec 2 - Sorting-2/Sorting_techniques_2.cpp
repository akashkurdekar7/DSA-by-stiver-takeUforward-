#include <bits/stdc++.h>
using namespace std;
void output(int arr[], int n)
{
    cout << "Elements Ouput: ";
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}

void MergeSort(int arr[], int n)
{
    int low = n / 2;
    int high = n / 2;

    if (low >= high)
        return;

    int mid = (low + high) / 2;

    // left halves

    // right halves

    // merge

    for (int i = 0; i <= mid + 1; i++)
    {
        for (int j = mid; j <= high; j++)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MergeSort(arr, low, mid);
    MergeSort(arr, mid + 1, high);
    Merge(arr, n);
    output(arr, n);
    return 0;
}