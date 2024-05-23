#include <iostream>
#include <bitset>
using namespace std;

int findSetBitPosition(int N)
{
    if (N == 0)
        return -1; // If N is 0, return -1 as there are no set bits
    if ((N & (N - 1)) != 0)
        return -1; // If N has more than one set bit, return -1

    int position = 1;
    while ((N & 1) != 1)
    {
        N >>= 1; // Right shift N until the LSB becomes 1
        position++;
    }
    return position;
}

int main()
{
    int N = 4; // Example input
    // cout << "OUTPUT: " << findSetBitPosition(N) << endl;
    return 0;
}
