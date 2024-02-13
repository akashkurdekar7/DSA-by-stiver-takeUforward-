#include <iostream>
using namespace std;

int main()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> a = {1, {4, 5}};
    cout << a.first << " " << a.second.second << a.second.first << endl;

    pair<int, int> x[] = {{1, 4}, {5, 6}, {9, 8}};
    cout << x[2].first << endl;
    return 0;
}