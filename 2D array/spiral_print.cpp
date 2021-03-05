#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000][1000] = {0};
    int m, n;
    cin >> m >> n;
    int val = 1;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = val;
            val = val + 1;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int row_start = 0;
    int row_end = m - 1;
    int col_start = 0;
    int col_end = n - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        //! to print 1st row
        for (int i = col_start; i <= col_end; i++)
        {
            cout << a[row_start][i] << " ";
        }
        row_start++;

        //! end col

        for (int i = row_start; i <= row_end; i++)
        {
            cout << a[i][col_end] << " ";
        }
        col_end--;
        //! down
        if (row_end > row_start)
        {
            for (int i = col_end; i >= col_start; i--)
            {
                cout << a[row_end][i] << " ";
            }
            row_end--;
        }

        //! 1st col
        if (col_end > col_start)
        {
            for (int i = row_end; i >= row_start; i--)
            {
                cout << a[i][col_start] << " ";
            }
            col_start++;
        }
    }

    return 0;
}