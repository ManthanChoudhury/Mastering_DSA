#include <bits/stdc++.h>
using namespace std;
int check(int a[], int n, int key, int output[])
{
    if (n == 0)
    {
        return 0;
    }
    int small_output = check(a + 1, n - 1, key, output);
    if (a[0] == key)
    {
        for (int i = small_output - 1; i >= 0; i--)
        {
            output[i + 1] = output[i] + 1;
        }
        output[0] = 0;
        small_output++;
    }
    else
    {

        for (int i = small_output - 1; i >= 0; i--)
        {
            output[i] = output[i] + 1;
        }
    }
    return small_output;
}
void AllIndexes(int input[], int n, int x)
{
    int output[n];
    int size = check(input, n, x, output);
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }
}

int main()
{
    int a[] = {6, 4, 6, 4, 4, 6, 4};
    AllIndexes(a, 7, 4);
}