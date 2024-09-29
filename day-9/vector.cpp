#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vec(3,2);
	
	for(int val : vec){
		cout<<val<<endl;
	}
	return 0;
}
