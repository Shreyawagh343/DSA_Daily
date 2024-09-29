#include <iostream>
using namespace std;

// Reserve
//void Reserve(int arr[],int size){
//	int start=0;
//	int end=size-1;
//	
//	while(start<end){
//		swap(arr[start],arr[end]);
//		start++;
//		end--;
//	}
//}

//int main(){	
//	int arr[]={12,23,34,45};
//	int size=4;
//	
//  
//  
//   Reserve(arr,size);
//  for(int i=0;i<size;i++){
//  	cout<<arr[i]<<" ";][\=]\]
//  }

//	return 0;
//}

//  sum of array
bool CheckAs(int arr[],int size){
	bool isCheck = true;
	
	for(int i=1;i<size;i++){
		if(arr[i]<arr[i-1]){
			return false;
		}
	}
			return true;
}
int main(){
	int arr[]={78,38,89,55};
	int size=4;
	
	CheckAs(arr,size);
	
	if(CheckAs){
		cout<<"Ascending order";
	}
	else {
		cout<<"Dscending order";
	}
	
}
