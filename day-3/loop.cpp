#include <iostream>
using namespace std;

int main(){

// while loop 

int a= 30;
while(a<=40){
	cout<<a<<endl;
	a++;
}

//for loop 

for(int i =10;i<=30;i++){
	cout<<i<<endl;
}

//do loop 
do{
	cout<<a<<endl;
	a++;
}while(a<=50);

//question 
// sum of num from 1 to n
int sum=0;
int n;
cout<<"Enter the number:";
cin>>n;

for(int i=1;i<=n;i++){
	sum=sum+i;
}
cout<<"sum of n numbers are"<<sum<<endl;

// sum of all odd numbers from 1 to n 

int sum=0;
int n;
cout<<"Enter the number:";
cin>>n;

for(int i=0;i<=n;i++){
	if(i%2==1){
		sum = sum+i;
	}
}
cout<<"sum of odd numbers are"<<sum<<endl;

// check number is prime or not 
int n =6;
bool flag =true;


for(int i=2;i<=n-1;i++){
	if(n%i==0){
	flag=false;
	break;
	}
}

if(flag==true){
		cout<<"Number is a prime"<<endl;
}
else {
		cout<<"Number is not a prime"<<endl;
}
return 0;
}
