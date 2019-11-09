#include<iostream>

using namespace std;

bool primeNumber(int input);
int main(){
	int n, input,count=0;
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>input;
		if(input !=1)
			count += primeNumber(input);
	}
	cout<<count;
	return 0;
}
bool primeNumber(int input){

	for(int i=2; i<input; i++){
		if((input%i) == 0)
			return false;
	}
	return true;
}