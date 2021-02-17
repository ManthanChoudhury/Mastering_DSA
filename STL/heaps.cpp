#include<bits/stdc++.h>
using namespace std;

int main(){

    int a =10;
    //! heap
    int* p =new int();
    *p = 10;
    //* p 200
    //* 200 10
    delete(p);
    //* deallocate memory
    p = NULL;
    //* dangling pointer
    return 0;
}
