#include<bits/stdc++.h>
using namespace std;

template <typename T>
T mymax(T x,T y){
    return (x>y) ? x:y;
}
//! talk about genric
//! one code use
int main(){
    cout<<mymax<int> (3,7)<<endl;
    cout<<mymax<char> ('a','d')<<endl;
    cout<<mymax<float> (1.2,2.2)<<endl;

}