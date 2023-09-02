//Write a program to create a 1-D array of size N and accept the element value.Accept a number from the user  to check that number is present in the array or not. 
//If the number is present in the array then replace that number with the sum of first and last element of the array. 
#include<iostream>
using namespace std;
int main(){
	  int i, num;

   cout<<"Enter the size for the array: ";
   cin>>num;
   int arr[num];

   cout<<"\nEnter "<<num<<" elements for the array:\n";
   for(i=0; i<num; i++)
   {
      cout<<"arr["<<i<<"] = ";
      cin>>arr[i];
   }

   cout<<"\nThe array is:\n";
   for(i=0; i<num; i++)
      cout<<arr[i]<<"  ";
      
      
      //Finding whether the element is present or not.

    



    
	return 0;
}
