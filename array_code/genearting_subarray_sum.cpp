
#include<bits/stdc++.h>
using namespace std;
//!n^3
int main(){
  int n;
  int a[1000];
  cout<<"Enter the size of array"<<endl;
  cin>>n;
  int i,j,k;
  int left =-1;
  int right =-1;
  int current_sum;
  int maximum_sum=0;
   // input
  for (i = 0; i < n; i++)
  {
      cin>>a[i];
  }

  //!operation

  for ( i = 0; i < n ; i++)
  {
    for ( j = i; j < n; j++)
    {
        current_sum = 0;
        for ( k = i; k<=j ; k++)
        {
            current_sum+= a[k];
        }
        if (current_sum>maximum_sum)
        {
            maximum_sum = current_sum;
            left =i;
            right=j;
            
        }
        
          
    }
    }
   
    for ( i = left; i <= right; i++){
    cout<<a[i]<<",";            
    }
    
    cout<<maximum_sum;
  
}