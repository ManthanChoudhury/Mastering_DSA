#include <bits/stdc++.h>
using namespace std;

void print_arr(int a[][100], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int stair(int a[][100], int n, int m, int x)
{
    int i = 0;
    int j = m - 1;

    while (i < n && j >= 0)
    {
        if (a[i][j] == x)
        {
            cout << "Found at " << i << " , " << j << endl;
            return 1;
        }
        if (a[i][j] > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return 0;
}

int main()
{
    int n, m;
    int i, j;
    int x;
    cin >> n;
    cin >> m;
    cin >> x;

    int a[100][100];

    int val = 1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = val;
            val++;
        }
    }

    print_arr(a, m, n);

    stair(a, m, n, x);

    print_arr(a, m, n);

    return 0;
}