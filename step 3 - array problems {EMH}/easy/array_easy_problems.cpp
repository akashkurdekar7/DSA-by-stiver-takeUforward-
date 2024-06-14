#include <bits/stdc++.h>
using namespace std;
void output(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

void largest_lowest_element(vector<int> &arr, int n)
{
    int highest = arr[0];
    int lowest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (highest <= arr[i])
        {
            highest = arr[i];
        }
        if (lowest >= arr[i])
        {
            lowest = arr[i];
        }
    }
    cout << "highest number: " << highest << endl;
    cout << "lowest number: " << lowest;
}

void Second_largest_lowest_element(vector<int> &arr, int n)
{
    if (n == 0 || n == 1)
    {
        cout << -1 << " " << -1 << endl;
    }
    if (n < 2)
    {
        cout << "provide more elements";
        return;
    }
    int small = __INT_MAX__;
    int second_small = __INT_MAX__;
    int highest = __INT_MAX__;
    int second_highest = __INT_MAX__;
}

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // largest_lowest_element(arr, n);
    Second_largest_lowest_element(arr, n);
    output(arr, n);
    return 0;
}