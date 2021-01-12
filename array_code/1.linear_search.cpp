#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {10,20,30,2,5,45,1,4445,56,7};
    int key;
    int n,i;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"size of array"<<n<<endl;
    cout<<"enter the key"<<endl;
    cin>>key;
    for ( i = 0; i <= n-1; i++)
    {
        if (arr[i]==key)
        {
            cout<<"found"<<i<<endl;
            break;
        }
        
    }
    if (i == n)
    {
       cout<<"Not Found"<<endl;
    }
    
    
    
}