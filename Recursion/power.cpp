#include <bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int small_output = power(x, n - 1);
    return (x * small_output);
}

int main()
{

    int x, n;
    cin >> x >> n;
    int result = power(x, n);
    cout << result;
}