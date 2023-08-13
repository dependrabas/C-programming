//WAP in cpp to interchange the values of two integer variable without using third varialble.
#include<iostream>
using namespace std;
int main(){
	int Num1,Num2;//10,15
	cout <<"Enter two Number" <<endl;
	cin >>Num1>>Num2;
	
	Num1 = Num2+Num1;//10+15=25
	Num2 = Num1-Num2;//25-15=10
	Num1 = Num1-Num2;//25-10=15
	
	
	
	cout<<"Num1 and Num2:"<<Num1 <<endl<< Num2;
	
	
	
	
	return 0;
}
