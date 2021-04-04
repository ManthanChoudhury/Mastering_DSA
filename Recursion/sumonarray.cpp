#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    return arr[0] + sum(arr + 1, n - 1);
}

int main()
{
    int a[] = {1, 2, 6, 4, 5};

    cout << sum(a, 5);
}