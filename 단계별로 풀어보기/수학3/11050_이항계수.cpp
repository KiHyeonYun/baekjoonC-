//���� ��� ����������� ���� �� �� �ִ� ������
#include<iostream>

using namespace std;
int binomialCoefficient(int a, int b);
int main(){
	int a, b;
	cin>>a>>b;

	cout<<binomialCoefficient(a,b);

	return 0;
}

int binomialCoefficient(int a, int b){
	int numerator=1, denominator=1;

	if(a == b)
		return 1;

	for(int i=a; (a-b)<i; i--){
		numerator*=i;			//����
	}
	for(int j=1; j<=b; j++){
		denominator*=j;			//�и�
	}
	return numerator/denominator;
}
