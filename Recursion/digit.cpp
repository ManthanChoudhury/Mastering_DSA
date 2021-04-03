#include <bits/stdc++.h>
using namespace std;

int digit_no(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int s_o = digit_no(n/10);
    return s_o+1;
}

int main()
{
    int n;
    cin >> n;
    cout << digit_no(n) << endl;
}