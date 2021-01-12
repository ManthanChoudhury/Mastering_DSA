#include <bits/stdc++.h>
using namespace std;
//! O(n)
int main(){

    int a[100];
    int currentsum = 0;
    int maxsum =0;
    int i,count;
    cout<<"enter the size of array";
    cin>>count;

    for ( i = 0; i < count; i++)
    {
        cin>>a[i];
    }

    for (i = 0; i < count; i++)
    {
        currentsum = currentsum +a[i];
        if (currentsum < 0)
        {
            currentsum =0;
        }
        maxsum = max(currentsum,maxsum);
    }
    cout<<maxsum;
    
}