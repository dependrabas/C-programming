//wap in c++ to implement the following input a number, reverse a number and find the greatest out of input number and reverse number.
#include<iostream>
using namespace std;
int reverseNum(int num) {
    int reversed = 0;
    while (num > 0) {
        int lastDig = num % 10;
        reversed = reversed * 10 + lastDig;
        num /= 10;
    }
    return reversed;
}

int main(){
	int num;
	cout<<"Enter a Number: ";
	cin>>num;
	int revNum = reverseNum(num);
	cout << "Reverse of the number: " << reversedNum << endl;

    if (num > revNum) {
        cout << "The greatest number is: " << num << endl;
    } else if (revNum > num) {
        cout << "The greatest number is: " << revNum << endl;
    } else {
        cout << "The original number and its reverse are equal." << endl;
    }

    return 0;
}
