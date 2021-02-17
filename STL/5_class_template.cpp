#include<bits/stdc++.h>
using namespace std;

template <typename T>
struct Pair{
    T x,y;

    Pair(T i,T j){
        x=i;
        y=j;
    }

    T getfirst(){
        return x;
    }

    T getsecond(){
        return y;
    }
};

int main(){

    Pair<int> p(10,20);
    cout<<p.getfirst()<<" "<<p.getsecond()<<" "<<endl;
    Pair<float> p2(30.5,40.5);
    cout<<p2.getfirst()<<" "<<p2.getsecond()<<" "<<endl;
    Pair<char> p3('a','b');
    cout<<p3.getfirst()<<" "<<p3.getsecond()<<" "<<endl;
    return 0;
}
