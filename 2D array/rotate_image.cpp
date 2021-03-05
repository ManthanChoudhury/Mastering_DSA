#include <bits/stdc++.h>
using namespace std;

void print_arr(int a[][100], int n)
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

void rotate_image(int a[][100], int n)
{

    //! reverse
    for (int i = 0; i < n; i++)
    {
        int start_col = 0;
        int end_col = n - 1;
        while (start_col < end_col)
        {
            swap(a[i][start_col], a[i][end_col]);
            start_col++;
            end_col--;
        }
    }
    //! transpose

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}

void stl_rotate_image(int a[][100], int n)
{
    //!rev
    for (int i = 0; i < n; i++)
    {
        reverse(a[i], a[i] + n);
    }
    //! transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}

int main()
{

    int n;
    int i, j;
    cin >> n;

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

    rotate_image(a, n);
    print_arr(a, n);
    stl_rotate_image(a, n);
}