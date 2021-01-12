#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int a[1000];
  cout<<"Enter the size of array"<<endl;
  cin>>n;
  int i,j;
  int left =-1;
  int right =-1;
  int current_sum=0;
  int maximum_sum=0;
  int cumaltive_sum[1000];
   // input
  for (i = 0; i <= n-1; i++)
  {
    cin>>a[i];
    cumaltive_sum[i] = cumaltive_sum[i-1]+a[i];

  }


  //!operation
for ( i = 0; i < n; i++)
{
  current_sum =0;
  for ( j = i; j < n; j++)
  {
    current_sum = cumaltive_sum[j] - cumaltive_sum[i-1];
  
  if (current_sum > maximum_sum)
  {
    maximum_sum = current_sum;
    left = i;
    right = j;
  }
  }
}

//! cout pair and sum

cout<<maximum_sum<<endl;
for ( i=left; i <= right; i++)
{
  cout<<a[i]<<",";
}
}

    
