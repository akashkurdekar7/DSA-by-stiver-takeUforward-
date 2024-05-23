#include <bits/stdc++.h>
using namespace std;
void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

void countFreq_map(int arr[], int n)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    int maxFreq = INT_MIN, minFreq = INT_MAX;
    int maxFreqElement, minFreqElement;
    for (auto x : hash)
    // cout << x.first << " " << x.second << endl;
    {
        if (x.second > maxFreq)
        {
            maxFreq = x.second;
            maxFreqElement = x.first;
        }
        if (x.second < minFreq)
        {
            minFreq = x.second;
            minFreqElement = x.first;
        }
    }
    cout << maxFreqElement << " " << minFreqElement << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // countFreq(arr, n);
    countFreq_map(arr, n);
    return 0;
}

// Time Complexity : O(N)
// Space Complexity : O(n)