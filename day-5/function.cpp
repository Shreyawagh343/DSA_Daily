#include <iostream>
using namespace std;

//int factorialNum(int n){
	int  fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;

}

//prime number 
//void checkPrime(int n){
	bool isPrime = true;
	
	for(int i=2;i<=n-1;i++){
		if(n % i == 0){
			isPrime = false;
			break;	
		}
		
	}
	
	if(isPrime == true){
		cout<<"It is a prime number"<<endl;
	}
	else {
		cout<<"It is not a prime number"<<endl;
	}
	
}


void PrimePrint(int n){	
	for(int i=1;i<=n;i++){
	 if(i%2!=0){
	 	cout<<i;
	 	
	 }
	}
	
}

int main(){
PrimePrint(7);
}
