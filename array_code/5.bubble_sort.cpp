#include<iostream>
using namespace std;



int bubble_sort(int a[] , int n){

    for (int i = 1; i <= n -1; i++)
    { 
        
    
        for (int j = 0; j <= (n-1-i); j++)
        {
            if (a[j] > a[j+1])
            {
             swap(a[j],a[j+1]);
            }
            
        }
        
        
    }
    return 0;

}

int main(){

    int a[12];
    int i,n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the array"<<endl;
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    bubble_sort(a,n);
    for (i = 0; i < n; i++)
    {
        cout<<a[i]<<",";
    }

    return 0;
}