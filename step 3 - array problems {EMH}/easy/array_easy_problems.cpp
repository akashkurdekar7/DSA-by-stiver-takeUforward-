#include <bits/stdc++.h>
#include <vector>
#include <unordered_set>
using namespace std;

void output(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    int small = INT_MAX;
    int second_small = INT_MAX;
    int highest = INT_MIN;
    int second_highest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        small = min(small, arr[i]);
        highest = max(highest, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < second_small && arr[i] != small)
        {
            second_small = arr[i];
        }
        if (arr[i] > second_highest && arr[i] != highest)
        {
            second_highest = arr[i];
        }
    }
    cout << "Second smallest is " << second_small << endl;
    cout << "Second largest is " << second_highest << endl;
}

void sort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            // Swap if the current element is greater than the next element
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

bool check_sorted(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                return false;
            }
        }
    }
    return true;
}

int duplicates(vector<int> &arr, int n)
{
    if (n < 2)
        return n;

    set<int> array;
    for (int i = 0; i < n; i++)
    {
        array.insert(arr[i]);
    }
    int j = 0;
    for (int x : array)
    {
        arr[j++] = x;
    }

    return j;

    // unordered_set<int> array;
    // vector<int> dup;
    // int count = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (array.find(arr[i]) != array.end())
    //     {
    //         count++;
    //         dup.push_back(arr[i]);
    //     }
    //     else
    //     {
    //         cout << arr[i] << " ";
    //         array.insert(arr[i]);
    //     }
    // }
    // for (int k = 0; k < count; k++)
    // {
    //     cout << "_" << " ";
    // }
    // cout << endl;

    // int i = 0;
    // for (int j = 1; j < n; j++)
    // {
    //     if (arr[i] != arr[j])
    //     {
    //         i++;
    //         arr[i] = arr[j];
    //     }
    // }
    // return i + 1;
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
    // Second_largest_lowest_element(arr, n);
    // bool ans = check_sorted(arr, n);
    // if (ans)
    //     cout << "true" << endl;
    // else
    //     cout << "false" << endl;
    int newarr = duplicates(arr, n);

    for (int i = 0; i < newarr; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = newarr; i < n; i++)
    {
        cout << "_" << ",";
    }
    // sort(arr, n);
    // output(arr);
    return 0;
}