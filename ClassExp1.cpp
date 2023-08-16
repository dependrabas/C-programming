//wap in cpp to accept a N digit number from keyboard and print the single digit sum of the number.
#include<iostream>
using namespace std;
int main(){

int Num,r = 0,Sum;
cout<<"Enter a Number of any digit:";
cin>>Num;
while(Num>0){
	r=Num%10;
	Sum = Sum+r;
	r=r/10;
	cout<<"The Sum in single digit is"<<Sum;
}
	
return 0;
}
