#include <iostream>
using namespace std;

// pass by reference function

void changeOfArray(int arr[] , int size){
	for(int i=0;i<size;i++){
		arr[i] = arr[i]*2;
	}
	
}

int main(){
	// input array and printing array
	int marks[5];
	
	for(int i=0;i<5;i++){
		cin>>marks[i];
	}
	
	for(int i=0;i<=4;i++){
		cout<<marks[i]<<endl;
	}
	

// find smallest array
int num[5]={23,34,45,67,89};
int size =5;
int smallest=INT_MAX;
int largest=INT_MIN;


for(int i=0;i<size;i++){
	smallest= min(num[i],smallest);	
}
cout<<smallest<<endl;

// pass by reference

int arr[]={12,34,56,78};

changeOfArray(arr ,3);    

for(int i=0;i<3;i++){
	cout<<arr[i]<<" ";
}
}
