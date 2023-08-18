//write a program to accept the gender and age of a person and check person is eligible for marriage or not.
#include<iostream>
using namespace std;
int main(){
	int Gender,Age;
	cout<<"Please enter your Gender (M for male /F for Female):";
	cin>>Gender;
		cout<<"Please enter your Age below:"<<endl;
	cin>>Age;
	if(Gender== F && Age >= 18){
		cout<<"Eligible";
	}
	else{
		cout<<"Not Eligible";
	}
		if(Gender ==M && Age>= 21){
		cout<<"Eligible";
	}
	else{
		cout<<"Not Eligible";
	}
	return 0;
}
