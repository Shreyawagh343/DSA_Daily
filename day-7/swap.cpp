#include <iostream>
using namespace std;
	
int main(){
	int arr[]={12,23,45,65,24};
	int size=5;
	int max=0;
	int min=0;
	int minIndex;
	int maxIndex;
	int temp;
	
	for(int i=0;i<size;i++){
	if(arr[i]>max){
		max=arr[i];
		maxIndex=i;
	}
	if(arr[i]<min){
		min=arr[i];
		minIndex=i;
	}	
	}
	
	temp = arr[minIndex];
	arr[minIndex] = arr[maxIndex];
	arr[maxIndex]=temp;
	
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
}
