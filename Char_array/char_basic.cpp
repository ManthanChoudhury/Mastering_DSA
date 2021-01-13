#include <bits/stdc++.h>
using namespace std;

int main(){
    char a[] ="hello";
    char b[] = {'h','e','l','l','o','\0'};
    char c[] = {'h','e','l','l','o'};
    cout<<a<<"    "<<strlen(a)<<endl;
    cout<<b<<"   "<<strlen(b)<<endl;
    cout<<c<<"   "<<strlen(c)<<endl;
     cout<<a<<"  "<<sizeof(a)<<endl;
    cout<<b<<"   "<<sizeof(b)<<endl;
    cout<<c<<"   "<<sizeof(c)<<endl;
}