#include <bits/stdc++.h>
using namespace std;

int print_no(int n)
{
    if (n == 1)
    {
        return 1;
    }
    cout<<n;
    //int small_output = print_no(n-1);
    return print_no(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << print_no(n) << endl;
}