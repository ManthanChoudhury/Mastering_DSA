#include<iostream>
using namespace std;


int bs(int a[] , int n , int key){
    int start = 0;
    int end = n-1;
    int mid ;
    while (start <= end)
    {
     mid = (start+end)/2;
     if (a[mid]==key)
    {
        return mid;
    }
    else if (key > a[mid])
    {
        start = mid +1;
    }
    else
    {
        end = mid -1;
    }
    
    
}
return - 1;
//! if key not found
}
int main(){

    int a[12];
    int i,n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    
    int key;

    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    cout<<"Enter the element you want to search "<<endl;
    cin>>key;

    cout<<bs(a,n,key);
}

