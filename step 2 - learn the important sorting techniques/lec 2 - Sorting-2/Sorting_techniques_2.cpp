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

    output(arr, n);
    return 0;
}