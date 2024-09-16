#include <iostream>
using namespace std;

int main(){
	int age = 88; 
// if-else
	if(age>18){
		cout<<"you are eligible for voting";
	}
	else {
		cout<<"you are not eligible for voting";
	}

// else-if
	if(age>18){
		cout<<"you are eligible for voting";
	}
	else if(age==18){
		cout<<"you are going to eligible for voting next year";
	}
	else {
		cout<<"you are going not eligible for voting";
	}

// question 
// find lowercase and uppercase char
char cha;
cout<<"Enter your cha:";
cin>>cha;
if(cha>='a'&& cha<='z'){
	cout<<"lowercase char"<<endl;
}
else {
	cout<<"uppercase char"<<endl;
}

// Ternary 
age>30?cout<<"you are voting":cout<<"you are not voting";

	return 0;
}
