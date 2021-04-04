#include<bits/stdc++.h>
using namespace std;

bool check(int a[],int n,int key){
    if (n==0)
    {
        return false;
    }
    if (a[0] == key)
    {
        return true;
    }
    int small_output = check(a+1,n-1,key);
    return small_output;
}

int main(){
    int a[] = {1,2,3,4,5,6,7};
    cout<<check(a,7,4);

}