#include <bits/stdc++.h>
using namespace std;
int check(int a[], int n, int key)
{
    if (n == 0)
    {
        return -1;
    }
    if (a[n] == key)
    {
        return n;
    }
    //! recursion division from behind
    int small_output = check(a, n - 1, key);
    return small_output;
}

int main()
{
    int a[] = {6, 4, 6, 4, 4, 6, 4};
    cout << check(a, 7, 6);
}