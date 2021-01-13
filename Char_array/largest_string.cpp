#include<bits/stdc++.h>
using namespace std;

int main(){

    char a[100];
    char largest[100];

    int len = 0;
    int largest_len = 0;
    int n,i;

    cout<<"enter size of testcase";
    cin>>n;
    cin.get();
    while (n--)
    {
        cin.getline(a,100);
        len = strlen(a);
        if (len > largest_len)
        {
            largest_len = len;
            strcpy(largest,a);
        }
        
    }
    cout<<largest<<"  "<<largest_len<<endl;
    
}