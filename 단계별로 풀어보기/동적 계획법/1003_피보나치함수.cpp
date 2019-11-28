
/*	
	0은 피보나치 수열과 동일하게 증가함
	1은 0보다 an-1항과 동일하게 증가함
	즉, 0과 1이 recurrsive하게 피보나치 수를 구할 때, 
	0은 f(n)과 같고 1은 f(n-1)과 같음
	
	따라서 이 문제에서 구하는 0과 1의 호출 횟수는
	1항 = 0, 2항 = 1이라 할 때, 피보나치 수열을 구하면 쉽게 프로그래밍 할 수 있음
*/
#include<iostream>
#define MAX_FIBO 40
using namespace std;

void fibonacci(int *fibo, int n);
int main(){
	
	int fibo[MAX_FIBO+1];
	int *result;

	int t,n;
	int j=0;
	fibo[0] = 0;
	fibo[1] = 1;
	fibonacci(fibo, MAX_FIBO);
	
	cin>> t;
	
	result = new int[t*2];
	
	for(int i=0; i<t; i++){
		cin>>n;
		if(n == 0){
			result[j++] = 1;
			result[j++] = 0;
		}
		else{
			result[j++] = fibo[n-1];
			result[j++] = fibo[n];
		}
	}

	j=0;

	while(t--){
		cout<<result[j]; j++;
		cout<<' '<<result[j]<<'\n';	j++;
	}
	return 0;
}
void fibonacci(int *fibo, int n) {
	for(int i=2; i<=n; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
}
