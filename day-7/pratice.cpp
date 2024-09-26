#include <iostream>
using namespace std;



int main(){
	// SUM  & PRODUCT NUMBERS OF ARRAY 
//	int arr[]={1,2,3,4};
//	int sum=0;
//	int product=1;
//	int size=4;
//	
//	for(int i=0;i<size;i++){
//		int result = arr[i];
//		sum +=result;
//	}
//	for(int i=0;i<size;i++){
//		int result1 = arr[i];
//		product *=result1;
//	}
//	cout<<sum<<endl;
//	cout<<product<<endl;

// print unique value
int arr[]={1,2,3,5,5,4,1,2};
int size=8;

for(int i=0;i<size;i++){
	for(int j=0;j<=i;j++){
	if(j==i){
		cout<<arr[i];
	}
		if(arr[i]==arr[j]){
			break;
		}
}
}
	return 0;
}
