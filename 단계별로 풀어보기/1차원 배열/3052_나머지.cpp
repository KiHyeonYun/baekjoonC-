#include<iostream>
#define DIVNUMBER 42

using namespace std;

int main(){
	int num[10] = {-1,};	
	int length = sizeof(num)/sizeof(int);
	int count = 1;

	for(int i=0; i<length; i++){
		cin>> num[i];
		
		//입력받고 바로 DIVNUMBER로 나눔 -> loop를 통해 이전 나머지 값들과 비교 후 conut증가 결정
		if(0<=num[i] && num[i] <=1000){
			num[i] = num[i]% DIVNUMBER;
			
			for(int j=0; j<i; j++){
				if(num[i] == num[j])
					break;	
				if(j == i-1)
					count++;		
			}
		}
		else
			return -1;
	}

	cout<< count <<endl;
	return 0;
}