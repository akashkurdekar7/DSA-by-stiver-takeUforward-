void fibonacci(int n)
{
    // 0 1 1 2 3 5
    int i = 0, j = 1, sum;
    while (i <= n)
    {
        cout << i << " ";
        sum = i + j;
        i = j;
        j = sum;
    }
    cout << endl;
}