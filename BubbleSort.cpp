#include<iostream>
using namespace std;
int main(){
	int i,num;
	cout<<"Enter the size of array:";
	cin>>num;
	int arr[num];
	cout<<"Enter "<<num<<"elements for the array";
	for(int i=0;i<num;i++){
		cout<<"Arr["<<i<<"]= "<<endl;
		cin>>arr[i];
		}
	

		cout<<"The Array are:\n"<<endl;
			for(i=0;i<num;i++){
				cout<<arr[i]<<" "<<endl;  
	}
	//sorting the array
	for(i=0;i<num-i-1;i++){
		for(int j= num-1;j<num;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[i];
				arr[i]= arr[j+1];
				arr[j+1]= temp;
			}
		}
		cout<<"The bubble sorted  are:"<<arr[i]<<endl;
	}
	
	
	return 0;
	
}
