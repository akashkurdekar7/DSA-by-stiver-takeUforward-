#include <iostream>
#include <vector>
using namespace std;

int collectMaxApples(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> dp1(n, vector<int>(n, 0)); // dp1[i][j]: max apples from (0,0) to (i,j)
    vector<vector<int>> dp2(n, vector<int>(n, 0)); // dp2[i][j]: max apples from (n-1,n-1) to (i,j)

    // Compute dp1
    dp1[0][0] = matrix[0][0];
    for (int i = 1; i < n; ++i)
    {
        dp1[0][i] = (matrix[0][i] != -1) ? dp1[0][i - 1] + matrix[0][i] : -1;
        dp1[i][0] = (matrix[i][0] != -1) ? dp1[i - 1][0] + matrix[i][0] : -1;
    }
    for (int i = 1; i < n; ++i)
    {
        for (int j = 1; j < n; ++j)
        {
            if (matrix[i][j] != -1)
            {
                int fromTop = (dp1[i - 1][j] != -1) ? dp1[i - 1][j] + matrix[i][j] : -1;
                int fromLeft = (dp1[i][j - 1] != -1) ? dp1[i][j - 1] + matrix[i][j] : -1;
                dp1[i][j] = max(fromTop, fromLeft);
            }
            else
            {
                dp1[i][j] = -1;
            }
        }
    }

    // Compute dp2
    dp2[n - 1][n - 1] = matrix[n - 1][n - 1];
    for (int i = n - 2; i >= 0; --i)
    {
        dp2[n - 1][i] = (matrix[n - 1][i] != -1) ? dp2[n - 1][i + 1] + matrix[n - 1][i] : -1;
        dp2[i][n - 1] = (matrix[i][n - 1] != -1) ? dp2[i + 1][n - 1] + matrix[i][n - 1] : -1;
    }
    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = n - 2; j >= 0; --j)
        {
            if (matrix[i][j] != -1)
            {
                int fromBottom = (dp2[i + 1][j] != -1) ? dp2[i + 1][j] + matrix[i][j] : -1;
                int fromRight = (dp2[i][j + 1] != -1) ? dp2[i][j + 1] + matrix[i][j] : -1;
                dp2[i][j] = max(fromBottom, fromRight);
            }
            else
            {
                dp2[i][j] = -1;
            }
        }
    }

    // Find maximum total apples collected
    int maxApples = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (matrix[i][j] != -1 && dp1[i][j] != -1 && dp2[i][j] != -1)
            {
                maxApples = max(maxApples, dp1[i][j] + dp2[i][j] - matrix[i][j]);
            }
        }
    }
    return maxApples;
}

int main()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        int n;
        cin >> n;                                         // Size of the matrix
        vector<vector<int>> matrix(n, vector<int>(n, 0)); // Initialize matrix
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> matrix[i][j]; // Input matrix elements
            }
        }
        cout << collectMaxApples(matrix) << endl; // Output the result
    }
    return 0;
}
