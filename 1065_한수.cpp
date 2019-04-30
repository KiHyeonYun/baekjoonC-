#include<iostream>
#define MAX 1000
using namespace std;
int hanSu(int n);
int main()
{
	int n;
	int result=0;
	cin>>n;
	
	if(1<=n && n<=MAX){
		for(int i =1; i<=n; i++)
		result += hanSu(i);

		cout<<result<<endl;
	}

	return 0;
}
int hanSu(int n){
	int digit=0;
	int temp=n;

	if(n < 100)										//99������ ��� �Ѽ���
		return 1;
	else if(n == 1000)								//1000�� �Ѽ� �ƴ� (��� ��)
		return 0;

	do{												//n�� �ڸ� ���� ���Ѵ�.
		digit++;
		temp = temp/10;
	}while(temp!=0);
	
	temp = 1;
	int* han = new int[digit];						//�ڸ��� ũ�⸸ŭ �����Ҵ��� �޴´�.
	han[0] = n%10;									//�ڸ����� ���� �ִ´�.
	han[1] = n%100/10;
	han[2] = n/100;
	
	int past = han[0] - han[1], present;			//���� ��� �� ��
	int result=1;
	for(int i=1; i<digit-1; i++){					//�Ѽ� üũ
		present = han[i]-han[i+1];					//���� ��� �� ��
		
		if(past == present)
			continue;
		else{
			result=0;
		}	
	}
	delete han;
	return result;
}