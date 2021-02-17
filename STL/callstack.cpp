#include<bits/stdc++.h>
using namespace std;

int func1(int a, int b){
    int sum = a+b;
    return sum;
}
int func2(int a, int b){
    int sum = a-b;
    return sum;
}
int func3(int a, int b){
    int sum = a*b;
    return sum;
}
int func4(int a, int b){
    int sum = a/b;
    return sum;
}
int main(){

    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<func1(a,b)<<endl;
    cout<<func2(a,b)<<endl;
    cout<<func3(a,b)<<endl;
    cout<<func4(a,b)<<endl;
    return 0;
}
