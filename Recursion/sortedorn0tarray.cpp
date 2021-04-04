#include<bits/stdc++.h>
using namespace std;

bool sorted(int a[], int size){
    if (size ==0 || size ==1)
    {
        return true;
    }

    if (a[0] > a[1])
    {
        return false;
    }

    bool small_output = sorted(a+1,size-1);
    return small_output;
    
    
}



int main(){
    int a[] = {1,2,6,4,5};

    cout<<sorted(a,5);
}