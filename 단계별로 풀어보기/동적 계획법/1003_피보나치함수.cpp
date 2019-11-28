
/*	
	0�� �Ǻ���ġ ������ �����ϰ� ������
	1�� 0���� an-1�װ� �����ϰ� ������
	��, 0�� 1�� recurrsive�ϰ� �Ǻ���ġ ���� ���� ��, 
	0�� f(n)�� ���� 1�� f(n-1)�� ����
	
	���� �� �������� ���ϴ� 0�� 1�� ȣ�� Ƚ����
	1�� = 0, 2�� = 1�̶� �� ��, �Ǻ���ġ ������ ���ϸ� ���� ���α׷��� �� �� ����
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
