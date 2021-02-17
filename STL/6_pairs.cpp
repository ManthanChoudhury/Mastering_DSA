#include<iostream>
#include<utility>

using namespace std;
//! application
int main(){
    pair<int,int> p1,p3;
    pair<int,char> p2(1,'O');
    
    p1 = {10,20};
    p3 = {20,30};

    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;

    cout<<(p1==p3)<<endl;
    cout<<(p1!=p3)<<endl;
    cout<<(p1>p3)<<endl;
    cout<<(p1<p3)<<endl;





    return 0;
}