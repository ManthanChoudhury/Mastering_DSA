#include <bits/stdc++.h>
using namespace std;

bool check(char a[]){
    int start = 0;
    int end = strlen(a)-1;

    while (start <end)
    {
        if (a[start] == a[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
        
        
    }
    return true;
    
}

int main(){

    char a[100];
    cout<<"enter the string"<<endl;
    cin.getline(a,100);

    if (check(a))
    {
        cout<<"palidrom";
    }
    else
    {
        cout<<"Not palidrom";
    }
    
    

}