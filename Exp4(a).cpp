
//Write a Program TO CREATE A 1D ARRAY OF SIZE N AND COUNT HOW MANY TIMES EACH UNIQUE ELEMENT APPEARS IN THE ARRAY.
// example:  10 ELEMENTS.
// 7 3 7 2 9 1 3 5 2 7
//OUTPUT 7 IS PRESENT 3 TIMES
//OUTPUT 3 IS PRESENT 2 TIMES
//OUTPUT 2 IS PRESENT 2 TIMES
//OUTPUT 9 IS PRESENT 1 TIMES
//OUTPUT 1 IS PRESENT 1 TIMES
//OUTPUT 5 IS PRESENT 1 TIMES

#include<iostream>
using namespace std;
int main()
{
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

   cout<<endl;
   int counts[1000]={0};
   for(i=0;i<num;++i){
   	counts[arr[i]]++;
   }
   for(i=0;i<1000;i++){
   	if(counts[i]>0){
   		cout<<"Elements "<<i<<" is present "<<counts[i]<<" times."<<endl;
	   }
   }
   return 0;
}
