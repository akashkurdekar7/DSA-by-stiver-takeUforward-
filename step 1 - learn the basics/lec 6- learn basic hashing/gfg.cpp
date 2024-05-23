// Input : N = 5
// arr[] = {2, 3, 2, 3, 5}
// P = 5
// Output : 0 2 2 0 1
// Explanation : Counting frequencies of each array element
// We have : 1 occurring 0 times.2 occurring 2 times.3 occurring 2 times.4 occurring 0 times.5 occurring 1 time.
#include <iostream>
#include <vector>
using namespace std;

vector<int> frequencyCount(const vector<int> &arr, int N, int P)
{
    vector<int> freq(P + 1, 0);
    for (int i = 0; i < N; i++)
    {
        if (arr[i] <= P)
        {
            freq[arr[i]]++;
        }
    }
    return freq;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, P;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cin >> P;
        vector<int> frequencies = frequencyCount(arr, N, P);
        for (int i = 1; i <= P; i++)
        {
            cout << frequencies[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
