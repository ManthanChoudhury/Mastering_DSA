#include<bits/stdc++.h>
using namespace std;

int check(int a[],int n,int key){
   if (n==0)
   {
       return -1;
   }
   if (a[0] == key)
   {
       return 0;
   }
   int small_output = check(a+1,n-1,key);
   if (small_output == -1)
   {
       return -1;
   }
   else{
       small_output++;
       return small_output;
   }
   
   
    
}

int main(){
    int a[] = {1,2,3,4,5,6,7};
    cout<<check(a,7,4);

}