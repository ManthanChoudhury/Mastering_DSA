#include<iostream>
#include<climits>
using namespace std;

int main(){

    int a[10]={1,52,543,385,256,3,5,4,54987,90};

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int i;

    for ( i = 0; i < 10; i++)
    {
        largest = max(largest,a[i]);
        smallest = min(smallest,a[i]);

        
    }
    cout<<smallest<<endl<<largest;
}
//!!
/*
if (smallest > a[i])
        {
            smallest = a[i];
        }
        if (largest < a[i])
        {
            largest = a[i];
        }
*/