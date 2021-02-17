#include<iostream>
#include<vector>

using namespace std;
//! application
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout<<(*i)<<" ";
    }

    v.pop_back();
    v.pop_back();

    for(int x : v){
        cout<<x<<" ";
    }

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;








    return 0;
}