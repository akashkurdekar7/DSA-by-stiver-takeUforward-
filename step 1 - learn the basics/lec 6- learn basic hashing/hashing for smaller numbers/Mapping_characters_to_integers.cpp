#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char character;
        cin >> character;
        cout << hash[character - 'a'] << " ";
        // this here access the frequency from the hashed array
        // hash[26]={0}
    }
    return 0;
}