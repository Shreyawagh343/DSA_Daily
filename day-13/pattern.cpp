#include <iostream>
using namespace std;

int main(){
	int n=4;
	for(int i=0;i<n;i++){
		int num=1;
		for(int j=0;j<i+1;j++){
			cout<<num;
			num++;
		}	for(int j=0;j<2*(n-i-1);j++){
			cout<<" ";
		}
		for(int j=i+1;j>0;j--){
			cout<<j;
		}
		cout<<endl;
	}

// numbers 
int n=5;
int num=1;
for(int i=0;i<n;i++){
	for(int j=0;j<i+1;j++){
		cout<<num<<" ";
		num++;
	}
	cout<<endl;
}

// alpabent
int n=5;
for(int i=0;i<n;i++){
	char ch='A';
	for(int j=0;j<i+1;j++){
		cout<<ch<<" ";
		ch++;
	}
	cout<<endl;
}

// reserve alpabent
int n=5;
for(int i=0;i<n;i++){
	char ch='A';
	for(int j=0;j<n-i;j++){
		cout<<ch<<" ";
		ch++;
	}
	cout<<endl;
}

// a bb ccc pattern
int n=5;
for(int i=0;i<n;i++){
	for( char ch = 'A'+i , j=0;j<=i;j++){
		cout<<ch<<" ";
	}
	cout<<endl;
}
// star pattern 

int n=5;
for(int i=0;i<n;i++){
	for(int j=0;j<n-i;j++){
		cout<<"*";
	}
		for(int j=0;j<i;j++){
		cout<<" ";
	}
		for(int j=0;j<i;j++){
		cout<<" ";
	}
		for(int j=0;j<n-i;j++){
		cout<<"*";
	}	
	cout<<endl;
}
for(int i=0;i<n;i++){
	for(int j=0;j<i+1;j++){
		cout<<"*";
	}
		for(int j=0;j<n-i-1;j++){
		cout<<" ";
	}
		for(int j=0;j<n-i-1;j++){
		cout<<" ";
	}
		for(int j=0;j<i+1;j++){
		cout<<"*";
	}	
	cout<<endl;
}
	return 0;
	
}
