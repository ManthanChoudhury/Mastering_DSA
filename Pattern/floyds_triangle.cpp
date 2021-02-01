#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int count =1;

    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;
        
    }
    
    
    


    return 0;
}