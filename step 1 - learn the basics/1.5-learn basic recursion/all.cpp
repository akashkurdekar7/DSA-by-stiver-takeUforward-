#include <bits/stdc++.h>
using namespace std;
void recursion(int i, int n)
{
    if (i < n)
        return;
    int sum = 0;
    cout << "hiii" << endl;
    recursion(i + 1, n);
}
int main()
{
    int n = 3;
    recursion(1, n);
    return 0;
}