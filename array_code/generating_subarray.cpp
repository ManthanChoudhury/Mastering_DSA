#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int a[1000];
  cout<<"Enter the size of array"<<endl;
  cin>>n;
  int i,j,k;
   // input
  for (i = 0; i <= n-1; i++)
  {
      cin>>a[i];
  }

  //!operation

  for ( i = 0; i <= n-1; i++){
      for ( j = i; j < n-1; j++)
      {
          for ( k = i; k<=j ; k++)
          {
              cout<<a[k];
          }
          cout<<endl;
        }
    }
  
}
