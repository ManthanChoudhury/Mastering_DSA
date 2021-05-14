#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int prod[n];
        long lp = 1;
        long rp = 1;

        //!take array
        for (size_t i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        

        for (size_t i = 0; i < n; i++)
        {
            prod[i] = lp;
            lp=lp*arr[i];
        }

        for (int i = n - 1; i >= 0; i--)
        {
            prod[i] = prod[i]*rp;
            rp = rp*arr[i];
        }
        
        for (size_t i = 0; i < n; i++)
        {
            cout<<prod[i]<<" ";

        }
        cout<<endl;
        
    }
    
return 0;
}
