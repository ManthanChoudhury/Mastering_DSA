#include <bits/stdc++.h>
using namespace std;

int main(){

    int a[] = {1,3,5,7,10,11,12,13};
    int start = 0;
    int end = sizeof(a)/sizeof(int) -1;
    int current_sum =0;
    int target = 16;

    while (start<end)
    {
        current_sum = a[start]+ a[end] ;
        if (current_sum <target)
        {
            start++;

        }
        else if (current_sum >target)
        {
            end--;
        }
        else if(current_sum == target){
            cout<<a[start]<<","<<a[end]<<endl;
            start++;
            end --;
        }

        
        
    }
    

}