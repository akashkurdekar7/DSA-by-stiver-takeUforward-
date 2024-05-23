#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "array size: ";
    cin >> n;
    int arr[n];
    cout << "arr elements input: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "arr elements output: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // precompute
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << mp[number] << " ";
    }

    return 0;
}