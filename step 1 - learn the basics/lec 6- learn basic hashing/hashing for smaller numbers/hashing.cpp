#include <iostream>
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

    // precomtn
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << hash[number] << " ";
    }

    return 0;
}