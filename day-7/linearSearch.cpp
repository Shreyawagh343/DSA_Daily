#include <iostream>
using namespace std;

// linear search function
int linearSearch(int arr[] , int target,int size){
	for(int i=0;i<size;i++){
		if(arr[i]==target){
			return i;
		}
	}
	return -1;
	
}

// reverse a array

void reserveArray(int arr[],int size){
	int start=0,end=size-1;
	 while(start <end){
	 	swap(arr[start],arr[end]);
	 	start++;
	 	end--;
	 }
}

int main(){
	//linear search
	int arr[]={23,45,677,789,23};
	
	int result = linearSearch(arr,677,4);
	cout<<"Index of Traget is : "<<result<<endl;
	return 0;


// reverse of array

int arr[]={10,20,30,40,50};
int size = 4;

reserveArray(arr,size);

for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
}
}

