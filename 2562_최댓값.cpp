#include<iostream>

using namespace std;

int main(){
	int num[9] = {0,};	
	int length = sizeof(num)/sizeof(int);
	int max=0;
	int index=-1;

	for(int i=0; i<length; i++){
		cin>> num[i];
		if(0<=num[i] && num[i] <=100)
			continue;
		else
			return -1;
	}
	
	for(int i=0; i<length; i++){
		if(max<num[i]){
			max = num[i];
			index = i;
		}
	}
	cout<< max<<endl;
	cout<< index+1 <<endl;

	return 0;
}