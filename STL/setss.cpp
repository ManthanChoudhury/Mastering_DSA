#include<bits/stdc++.h>
using namespace std;

int main(){

    set <int> s;
    //!set <int,greater<int>> s;
    s.insert(120);
    s.insert(10);
    s.insert(3078);
    s.insert(404);
    s.insert(5);
    //? using auto
    /*for(auto x: s){
        cout<<x<<" ";
    }*/

    //? itrator
   // vector<int> :: iterator i = v.begin();
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout<<(*i)<<" ";
    }

    cout<<"rev"<<endl;
    
    //? reverse

    for (auto i = s.rbegin(); i != s.rend(); i++)
    {
        cout<<(*i)<<" ";
    }
    
    //! s.find(5),s.clear(),s.count(),s.erase(120);

    //! lower bound

    //! upper bound
    return 0;
}
