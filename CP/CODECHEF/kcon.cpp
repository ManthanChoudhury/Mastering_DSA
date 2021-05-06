#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll kadane(int arr[], int n)
{
    ll cs = 0;
    ll ms = INT_MIN;
    for (size_t i = 0; i < n; i++)
    {
        cs = cs + arr[i];
        if (ms < cs)
        {
            ms = cs;
        }
        if (cs < 0)
        {
            cs = 0;
        }

        return ms;
    }
}
ll max_sub_array(int arr[], int n, int k)
{
    ll kadane_sum = kadane(arr, n);
    if (k == 1)
    {
        return kadane_sum;
    }
    ll curr_perfix_sum = 0, curr_sufix_sum = 0;
    ll max_prefix_sum = INT_MIN, max_suffix_sum = INT_MIN;

    for (size_t i = 0; i < n; i++)
    {
        curr_perfix_sum = curr_perfix_sum + arr[i];
        max_prefix_sum = max(curr_perfix_sum, max_prefix_sum);
    }
    ll totalsum = curr_perfix_sum;
    for (size_t i = 0; i < n; i++)
    {
        curr_sufix_sum = curr_sufix_sum + arr[i];
        max_suffix_sum = max(curr_sufix_sum, max_suffix_sum);
    }
    ll ans;
    if (totalsum < 0)
    {
        ans = max(max_prefix_sum + max_suffix_sum, kadane_sum);
    }
    else
    {
        ans = max(max_prefix_sum + max_suffix_sum + (totalsum * (k - 2)), kadane_sum);
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << max_sub_array(arr, n, k) << endl;
    }
    return 0;
}