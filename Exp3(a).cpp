#include <iostream>
#include<cmath>
using namespace std;

int main() {
    // Write C++ code here
   
    int i ,j;
    int r1,r2,count;
    cout<<"Enter the Starting Range:";
   
    cin>>r1;
    cout<<"Enter the Ending Range:";
    cin>>r2;
    for(i = r1 ; i<=r2; i++)
    {
        count = 0;
       
     for(j = 2; j<sqrt(r2) ; j++)
     {
       
         {
             if(i % j == 0)
             {
                 count = 1;
             }
         }
         
         
     }
     if(count == 0)
         {
              cout<<i <<endl;
         }
       
       
    }

    return 0;
}
