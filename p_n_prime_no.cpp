#include <math.h>
#include <iostream>

using namespace std;

int main(){
    
    int n;
    int div = 0;
    cout<<"Enter the no till what u want to see "<< endl;
    cin>>n;

    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i%j == 0)
            {
                div = div+1;
            }
            }

            if (div > 2)
            {
                cout << "no " <<i<<endl;
            }
            else if (div <= 2)
            {
                cout << "yes " <<i<<endl;
            }
            div = 0;
            
        }
        
    }
