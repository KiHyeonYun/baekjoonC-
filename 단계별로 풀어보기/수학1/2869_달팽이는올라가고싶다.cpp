#include<iostream>

using namespace std;

int main(){

	int a, b, v;
	int temp1, temp2;
	int day;
	cin>>a>>b>>v;
	
	temp1 = v-a; //���� ���� - �Ϸ翡 �ö� �� �ִ� �Ÿ�
	temp2 = a-b; //�Ϸ翡 �ö� �� �ִ� �Ÿ� - �߶� �������� �Ÿ�
	
	//���࿡ t1%t2�� 0�̸� t1/t2�� �Ϸ縦 ���ϸ� ���� ���ް���
	//�ݸ� t1%t2�� �������� 1�̶� ������ �Ϸ縦 �ö� ��, ���� �ڰ�
	//�Ϸ縦 �� �ö󰡾� ��
	if(!(temp1%temp2))
		day = temp1/temp2+1; 
	else
		day = temp1/temp2+2;
	
	cout<<day<<endl;
	return 0;
}