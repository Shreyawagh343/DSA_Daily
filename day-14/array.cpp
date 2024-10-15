#include <iostream>
using namespace std;

// LIMEAR SEARCH 
int linearSerach(int arr[],int target,int size){
	for(int i=0;i<size;i++){
		if(arr[i]==target){
			return i;
		}
	}
	return -1;
}

// swap the arr 
void swapNum(int arr[],int size){
	int start=0;int end=size-1;
	
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

int main(){
	// FIND THE SMALLEST NUMBER
	int arr[]={12,23,4,5556,56};
	int size = 5;
	int smallest = INT_MAX;
	for(int i=0;i<size;i++){
		if(arr[i]<smallest){
			smallest=arr[i];
		}
	}
	cout<<smallest;

 //linear search
int arr[]={12,23,4,5556,56};
	int size = 5;
	int target = 56;
	cout<<linearSerach(arr,target,size);

// swap number
	int arr[]={12,23,4,556,56};
	int size = 5;
	swapNum(arr,size);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
