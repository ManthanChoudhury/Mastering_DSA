#include <bits/stdc++.h>
using namespace std;
void magic(int arr[][100], int m, int n, int k, int s)
{
    //!base case
    bool success = true;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch = arr[i][j];

            if (s < k)
            {
                success = false;
                break;
            }
            if (ch == '*')
            {
                s += 5;
            }
            else if (ch == '.')
            {
                s -= 2;
            }
            else
            {
                break;
            }
            //! we move we lose 1 point
            if (j != n - 1)
            {
                s--;
            }
        }
    }

    if (success)
    {
        cout << "Yes" << endl;
        cout << s;
    }
    else
    {
        cout << "NO";
    }
}

int main()
{

    int n, m, k, s;
    int i, j;
    cin >> m >> n >> k >> s;

    int a[100][100];

    //int val = 1;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    magic(a, m, n, k, s);
}