#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // precompute
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char character;
        cin >> character;
        // fetch
        cout << mp[character - 'a'] << " ";
        // this here access the frequency from the hashed array
        // hash[26]={0}
    }
    return 0;
}