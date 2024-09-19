#include <iostream>
using namespace std;

int main(){
	//Nested loop
	int X;
	cout<<"Enter no. of X:"<<endl;
	cin>>X;
	
	for(int i=1;i<=X;i++){
		cout<<"*";
	}

// sum of all number divisible by 3
	int X;
	int sum;
	cout<<"Enter no. of X:"<<endl;
	cin>>X;
	
	for(int i=0;i<=X;i++){
		if(i%3==0){
			sum=sum+i;
		}
	
	}
		cout<<sum<<endl;

}
