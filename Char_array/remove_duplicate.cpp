#include <bits/stdc++.h>
using namespace std;

void rmdupli(char a[]){

    int l = strlen(a);
    if (l==1 or l==0)
    {
        return;
    }
    int prev =0;
    for (int i = 1; i < l; i++)
    {
        if (a[i] != a[prev])
        {
            prev++;
            a[prev]=a[i];
        }
       // TODO pro logic enjoy 
    }
    a[prev+1] = '\0';
    return;
    
    
    

    
}

int main(){

    char a[100];
    cin.getline(a,100);
    rmdupli(a);
    cout<<a<<endl;

}