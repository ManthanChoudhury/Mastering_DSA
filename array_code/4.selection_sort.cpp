#include<iostream>
using namespace std;



int sel_sort(int a[] , int n){

    for (int i = 0; i < n -1; i++)
    { //! last will sorted automatically so we will traverse till n -1
    int min_idx = i;
        for (int j = i; j <= n-1; j++)
        {
            if (a[j] < a[min_idx])
            {
                min_idx = j;
            }
            
        }
        swap(a[i],a[min_idx]);
        
    }
    

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

    sel_sort(a,n);
    for (i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}