#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {10,20,30,40,50,60,70,80,90,100,110,120,130};
    //!container_type<data type> :: iterator varible;
    vector<int>:: iterator i = v.begin();
    for(auto i = v.begin();i!= v.end();i++){
        cout<<(*i);
    }
    cout << (*i) << " start" <<endl;
    i++;
    cout << (*i) << " i++" <<endl;
    i = next(i);
    cout << (*i) << " next(i)"<<endl;
    i = next(i,2);
    cout << (*i) << " next(i,2) "<<endl;
    i = prev(i,2);
    cout << (*i) << " prev(i,2) "<<endl;
    advance(i,4);
    cout << (*i) << " advance(i,4) "<<endl;
    i = v.end() -1;
    cout << (*i) << " v.end() -1" <<endl;
    i = v.end();
    cout << (*i) << " v.end()" <<endl;
}